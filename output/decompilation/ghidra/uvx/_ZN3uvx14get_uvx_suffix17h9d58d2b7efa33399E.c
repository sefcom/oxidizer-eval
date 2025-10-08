undefined8 _ZN3uvx14get_uvx_suffix17h9d58d2b7efa33399E(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_18 [8];
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00165e58)();
  if (lVar1 != 0) {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00165e60)(local_18,lVar1);
    if ((local_18[0] & 1) == 0) {
      uVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                        (local_10,local_8);
      return uVar2;
    }
  }
  return 0;
}