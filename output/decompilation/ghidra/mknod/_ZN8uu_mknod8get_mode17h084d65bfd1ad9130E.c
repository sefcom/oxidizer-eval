undefined8 * _ZN8uu_mknod8get_mode17h084d65bfd1ad9130E(undefined8 *param_1,long param_2)

{
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0x1b6;
  }
  else {
    (*(code *)PTR__ZN6uucore8features4mode10parse_mode17h0c942428ddc01afaE_001ea7e8)
              (&local_68,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    if (CONCAT44(uStack_64,local_68) != -0x8000000000000000) {
      local_18 = local_58;
      local_28 = local_68;
      uStack_24 = uStack_64;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      _ZN8uu_mknod8get_mode28__u7b__u7b_closure_u7d__u7d_17hedf9e9beb09a3d08E(&local_50,&local_28);
      *(undefined4 *)((long)param_1 + 0x14) = local_3c;
      *(undefined8 *)((long)param_1 + 0xc) = local_44;
      *param_1 = local_50;
      *(undefined4 *)(param_1 + 1) = local_48;
      return param_1;
    }
    if (0x1ff < uStack_60) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7e6cafe721babae1E
                (param_1,"mode must specify only file permission bits",0x2b);
      return param_1;
    }
    *(uint *)(param_1 + 1) = uStack_60;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}