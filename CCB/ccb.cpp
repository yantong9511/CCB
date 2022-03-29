#include "ccb.h"
#include "ui_ccb.h"
#include "./hid/hidapi.h"

ccb::ccb(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ccb)
{
    ui->setupUi(this);
}

ccb::~ccb()
{
    delete ui;
}


void ccb::on_pushButton_clicked()
{
    hid_device *handle;
    struct hid_device_info *devs, *cur_dev;
    handle = hid_open(0x9990, 0x2001, NULL);
    if (!handle) {
        printf("unable to open device\n");
        return ;
    }
    printf("Device Found\n  type: %04hx %04hx\n  path: %s\n  serial_number: %ls", cur_dev->vendor_id, cur_dev->product_id, cur_dev->path, cur_dev->serial_number);
    printf("\n");
    printf("  Manufacturer: %ls\n", cur_dev->manufacturer_string);
    printf("  Product:      %ls\n", cur_dev->product_string);
    printf("  Release:      %hx\n", cur_dev->release_number);
    printf("  Interface:    %d\n",  cur_dev->interface_number);
    printf("\n");
}

