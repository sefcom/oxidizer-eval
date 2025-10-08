void _ZN3bat8terminal19as_terminal_escaped17h774f64753c895bd7E
               (undefined8 param_1,undefined4 param_2,ulong param_3,undefined8 param_4,long param_5,
               undefined param_6,char param_7,byte param_8,ulong param_9)

{
  undefined4 uVar1;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  byte local_48;
  undefined local_47;
  byte local_46;
  byte local_45;
  undefined4 local_44;
  undefined local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  
  if (param_5 != 0) {
    uVar1 = 0x15;
    if (param_7 == '\0') {
      local_45 = 0;
      local_46 = 0;
      local_48 = 0;
      local_3f = 0x15;
    }
    else {
      local_3f = _ZN3bat8terminal13to_ansi_color17h5249a5ef8d27cb4bE(param_2,param_6);
      local_48 = (byte)(param_3 & 0xffffffff) & 1;
      local_45 = (byte)((param_3 & 0xffffffff) >> 1) & 1;
      local_46 = (byte)((param_3 & 0xffffffff) >> 2) & 0x3f & param_8;
    }
    if ((param_9 & 1) != 0) {
      uVar1 = _ZN3bat8terminal13to_ansi_color17h5249a5ef8d27cb4bE(param_9 >> 8 & 0xffffffff,param_6)
      ;
    }
    local_47 = 0;
    local_44 = 0;
    local_40 = 0;
    local_78 = 0x8000000000000000;
    local_60 = 0x8000000000000002;
                    /* try { // try from 00544005 to 0054400e has its CatchHandler @ 00544028 */
    local_70 = param_4;
    local_68 = param_5;
    local_3b = uVar1;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hf5336000855022daE
              (param_1,&local_78);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (&local_78);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
            (param_1,param_4,0);
  return;
}