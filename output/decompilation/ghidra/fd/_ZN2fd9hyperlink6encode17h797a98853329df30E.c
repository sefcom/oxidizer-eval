void _ZN2fd9hyperlink6encode17h797a98853329df30E(undefined8 *param_1,byte param_2)

{
  uint uVar1;
  byte local_41;
  byte *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined *local_10;
  undefined8 local_8;
  
  local_41 = param_2;
  if ((((9 < (byte)(param_2 - 0x30)) && (0x19 < (byte)((param_2 & 0xdf) + 0xbf))) &&
      ((uVar1 = param_2 - 0x2d, 0x32 < uVar1 ||
       ((0x4000000002007U >> ((ulong)uVar1 & 0x3f) & 1) == 0)))) && (param_2 != 0x7e)) {
    local_40 = &local_41;
    local_38 = 
    PTR__ZN4core3fmt3num52__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_i8_GT_3fmt17hc03941a1f9bbbf93E_00540968
    ;
    local_30 = &DAT_005024e0;
    local_28 = 1;
    local_10 = &DAT_0017b3b8;
    local_8 = 1;
    local_20 = &local_40;
    local_18 = 1;
    _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(*param_1,param_1[1],&local_30);
    return;
  }
  (*(code *)
    PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_10write_char17h5f5747e99125faccE_005405e8
  )();
  return;
}