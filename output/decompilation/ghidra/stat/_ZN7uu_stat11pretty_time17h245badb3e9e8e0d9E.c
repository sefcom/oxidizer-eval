void _ZN7uu_stat11pretty_time17h245badb3e9e8e0d9E(undefined8 param_1)

{
  undefined local_b8 [8];
  undefined4 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88;
  int local_80 [2];
  undefined4 local_78;
  undefined local_28 [16];
  
  _ZN6chrono8datetime40DateTime_LT_chrono__offset__utc__Utc_GT_14from_timestamp17h1ce8e0fb8cfe0735E
            (local_80);
  if (local_80[0] == 0) {
    (*(code *)
      PTR__ZN101__LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__u20_as_u20_core__default__Default_GT_7default17h251f53cfce2ba472E_00222310
    )(local_b8);
  }
  else {
    local_b0 = local_78;
  }
  (*(code *)
    PTR__ZN168__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__GT__GT_4from17h90f246ab10ef0572E_00222318
  )(local_28,local_b8);
  local_a8 = "%";
  local_a0 = 0x17;
  local_98 = 8;
  local_90 = 0;
  local_88 = 0;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h59e8183133fd231fE
            (local_80,local_28,&local_a8);
                    /* try { // try from 00177b11 to 00177b1b has its CatchHandler @ 00177b33 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hae7f708c1328924dE
            (param_1,local_80);
  _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17ha95c3915e5883151E
            (local_80);
  return;
}