#define LV_CONF_INCLUDE_SIMPLE
#define LV_COLOR_DEPTH 1
#define LV_MEM_CUSTOM 1

#include "lv_misc/lv_log.h"
#include "lv_misc/lv_task.h"
#include "lv_misc/lv_math.h"
#include "lv_misc/lv_async.h"

#include "lv_hal/lv_hal.h"

#include "lv_core/lv_obj.h"
#include "lv_core/lv_group.h"

#include "lv_core/lv_refr.h"
#include "lv_core/lv_disp.h"

#include "lv_themes/lv_theme.h"

#include "lv_font/lv_font.h"
#include "lv_font/lv_font_fmt_txt.h"


#include "lv_objx/lv_btn.h"
#include "lv_objx/lv_imgbtn.h"
#include "lv_objx/lv_img.h"
#include "lv_objx/lv_label.h"
#include "lv_objx/lv_line.h"
#include "lv_objx/lv_page.h"
#include "lv_objx/lv_cont.h"
#include "lv_objx/lv_list.h"
#include "lv_objx/lv_chart.h"
#include "lv_objx/lv_table.h"
#include "lv_objx/lv_cb.h"
#include "lv_objx/lv_bar.h"
#include "lv_objx/lv_slider.h"
#include "lv_objx/lv_led.h"
#include "lv_objx/lv_btnm.h"
#include "lv_objx/lv_kb.h"
#include "lv_objx/lv_ddlist.h"
#include "lv_objx/lv_roller.h"
#include "lv_objx/lv_ta.h"
#include "lv_objx/lv_canvas.h"
#include "lv_objx/lv_win.h"
#include "lv_objx/lv_tabview.h"
#include "lv_objx/lv_tileview.h"
#include "lv_objx/lv_mbox.h"
#include "lv_objx/lv_gauge.h"
#include "lv_objx/lv_lmeter.h"
#include "lv_objx/lv_sw.h"
#include "lv_objx/lv_kb.h"
#include "lv_objx/lv_arc.h"
#include "lv_objx/lv_preload.h"
#include "lv_objx/lv_calendar.h"
#include "lv_objx/lv_spinbox.h"

#include "lv_draw/lv_img_cache.h"
