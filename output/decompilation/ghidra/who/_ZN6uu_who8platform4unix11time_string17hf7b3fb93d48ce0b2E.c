void _ZN6uu_who8platform4unix11time_string17hf7b3fb93d48ce0b2E
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [48];
  
  (*(code *)PTR__ZN4time18format_description5parse5parse17h2897a516b2049b07E_00205f78)
            (local_48,"[month repr:short] [day padding:space] [hour]:[minute]",0x36);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf95feabee4ed30afE(&local_70,local_48);
                    /* try { // try from 00167586 to 001675bc has its CatchHandler @ 001675d3 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10login_time17h4f8d8ed757c914d5E_00205f80)
            (local_58,param_2);
  _ZN4time16offset_date_time14OffsetDateTime6format17h2dec6e59d72ce7daE
            (local_48,local_58,local_68,local_60);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h928c3eeb66335618E(param_1,local_48);
  _ZN4core3ptr110drop_in_place_LT_alloc__vec__Vec_LT_time__format_description__borrowed_format_item__BorrowedFormatItem_GT__GT_17h5f1bac215f3d6f86E
            (local_70,local_68);
  return;
}