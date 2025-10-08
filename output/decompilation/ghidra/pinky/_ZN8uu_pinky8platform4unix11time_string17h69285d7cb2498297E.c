void _ZN8uu_pinky8platform4unix11time_string17h69285d7cb2498297E
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [48];
  
  (*(code *)PTR__ZN4time18format_description5parse5parse17h2897a516b2049b07E_001ffec8)
            (local_48,&DAT_0011a610,0x36);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h20731dfcebb0e6e0E(&local_70,local_48);
                    /* try { // try from 00162cf6 to 00162d2c has its CatchHandler @ 00162d43 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10login_time17h4f8d8ed757c914d5E_001ffed0)
            (local_58,param_2);
  _ZN4time16offset_date_time14OffsetDateTime6format17h61f8fcfa1b5ef1beE
            (local_48,local_58,local_68,local_60);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h494e281e4c6a4354E(param_1,local_48);
  _ZN4core3ptr110drop_in_place_LT_alloc__vec__Vec_LT_time__format_description__borrowed_format_item__BorrowedFormatItem_GT__GT_17he99dfbfa0bc72ba1E
            (local_70,local_68);
  return;
}