#ifndef UI_HOME_SCREEN_H
#define UI_HOME_SCREEN_H

#include <lvgl.h>
#include "colors.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_systemHomeScreen;
lv_obj_t * leftPane;
lv_obj_t * rightPane;
lv_obj_t * temperatureArc;
lv_obj_t * temperatureCelsiusLabel;

void ui_systemHomeScreen_init(void) {
    // ui_systemHomeScreen
    ui_systemHomeScreen = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(ui_systemHomeScreen, COLOR_BOTTOM_BG, LV_PART_MAIN);

    // rightPane
    rightPane = lv_obj_create(ui_systemHomeScreen);

    lv_obj_set_width(rightPane, 280);
    lv_obj_set_height(rightPane, 272);
    lv_obj_set_align(rightPane, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(rightPane, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(rightPane, COLOR_UPPER_BG, LV_PART_MAIN);
    lv_obj_set_style_border_width(rightPane, 0, LV_PART_MAIN);

    // temperatureArc
    temperatureArc = lv_arc_create(rightPane);

    lv_obj_set_width(temperatureArc, 200);
    lv_obj_set_height(temperatureArc, 200);
    lv_obj_set_align(temperatureArc, LV_ALIGN_TOP_MID);

    lv_arc_set_range(temperatureArc, 0, 120);
    lv_arc_set_value(temperatureArc, 23);
    lv_arc_set_bg_angles(temperatureArc, 0, 360);
    lv_arc_set_rotation(temperatureArc, 270);

    lv_obj_set_style_bg_color(temperatureArc, COLOR_UPPER_BG, LV_PART_MAIN);
    lv_obj_set_style_pad_left(temperatureArc, 10, LV_PART_MAIN);
    lv_obj_set_style_pad_right(temperatureArc, 10, LV_PART_MAIN);
    lv_obj_set_style_pad_top(temperatureArc, 10, LV_PART_MAIN);
    lv_obj_set_style_pad_bottom(temperatureArc, 10, LV_PART_MAIN);
    lv_obj_set_style_arc_color(temperatureArc, COLOR_ARC_BG, LV_PART_MAIN);
    lv_obj_set_style_arc_width(temperatureArc, 15, LV_PART_MAIN);

    lv_obj_set_style_arc_color(temperatureArc, COLOR_TEXT_PINK, LV_PART_INDICATOR);
    lv_obj_set_style_arc_width(temperatureArc, 15, LV_PART_INDICATOR);
    lv_obj_set_style_bg_opa(temperatureArc, 0, LV_PART_KNOB);

    // temperatureCelsiusLabel
    temperatureCelsiusLabel = lv_label_create(temperatureArc);

    lv_obj_set_width(temperatureCelsiusLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(temperatureCelsiusLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(temperatureCelsiusLabel, 10);
    lv_obj_set_y(temperatureCelsiusLabel, 0);

    lv_obj_set_align(temperatureCelsiusLabel, LV_ALIGN_CENTER);
    lv_label_set_text(temperatureCelsiusLabel, "23°C");
    lv_obj_set_style_text_color(temperatureCelsiusLabel, COLOR_TEXT_PINK, LV_PART_MAIN);
    lv_obj_set_style_text_font(temperatureCelsiusLabel, &lv_font_montserrat_48, LV_PART_MAIN);


    // leftPane
    leftPane = lv_obj_create(ui_systemHomeScreen);

    lv_obj_set_width(leftPane, 190);
    lv_obj_set_height(leftPane, 272);
    lv_obj_set_align(leftPane, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(leftPane, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(leftPane, COLOR_UPPER_BG, LV_PART_MAIN);
    lv_obj_set_style_border_width(leftPane, 0, LV_PART_MAIN);

}

#endif