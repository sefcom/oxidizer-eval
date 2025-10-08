void _ZN6uu_cat14get_input_type17hbfde5e00eb22cee4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint local_e4;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_90;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h736b8881c243fae3E
                    (param_2,param_3);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17hb2e8532d2d3376beE(&local_c8,param_2,param_3);
    if ((int)local_c8 == 2) {
      local_d0 = local_c0;
      _ZN3std2io5error14repr_bitpacked11decode_repr17h8d92c8d03cfdadccE(&local_e0,local_c0);
      if (((char)local_e0 == '\0') && (local_e0._4_4_ == 0x28)) {
        *param_1 = 0x8000000000000005;
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h22e0abbd25cf35a1E(&local_d0);
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = local_c0;
      return;
    }
    local_e4 = local_90;
    switch((local_90 & 0xf000) - 0x1000 >> 0xc) {
    case 0:
      *(undefined *)(param_1 + 1) = 6;
      break;
    case 1:
      *(undefined *)(param_1 + 1) = 5;
      break;
    default:
      local_e0 = &local_e4;
      local_d8 = 
      PTR__ZN54__LT_std__fs__FileType_u20_as_u20_core__fmt__Debug_GT_3fmt17h44181ef67d9b0947E_001f2568
      ;
      local_c8 = &DAT_00119be0;
      local_c0 = 1;
      local_a8 = 0;
      local_b8 = &local_e0;
      local_b0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hca5ca0cd9da1a1e1E(param_1,&local_c8);
      return;
    case 3:
      *(undefined *)(param_1 + 1) = 0;
      break;
    case 5:
      *(undefined *)(param_1 + 1) = 4;
      break;
    case 7:
      *(undefined *)(param_1 + 1) = 1;
      break;
    case 9:
      *(undefined *)(param_1 + 1) = 3;
      break;
    case 0xb:
      *(undefined *)(param_1 + 1) = 7;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  *param_1 = 0x8000000000000006;
  return;
}