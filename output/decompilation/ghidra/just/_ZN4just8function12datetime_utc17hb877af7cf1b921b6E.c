undefined8 *
_ZN4just8function12datetime_utc17hb877af7cf1b921b6E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_90;
  undefined local_84 [12];
  undefined local_78 [88];
  
  (*(code *)PTR__ZN6chrono6offset3utc3Utc3now17h788cf36a0d010237E_00566b88)(local_84);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  local_b0 = param_3;
  uStack_a8 = param_4;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17hae435f4a35fa203dE
            (local_78,local_84,&local_b0);
                    /* try { // try from 0036a49b to 0036a4a7 has its CatchHandler @ 0036a4dd */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7a0253cb9a868533E
            (&local_b0,local_78);
  param_1[3] = local_a0;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_b0;
  *(undefined4 *)((long)param_1 + 0xc) = local_b0._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a8;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_a8._4_4_;
  *param_1 = 0;
  _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h832ee16fadc7d71fE
            (local_78);
  return param_1;
}