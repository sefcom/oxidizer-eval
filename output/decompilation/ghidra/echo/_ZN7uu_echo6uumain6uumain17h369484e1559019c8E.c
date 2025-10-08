undefined  [16] _ZN7uu_echo6uumain6uumain17h369484e1559019c8E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined uVar4;
  undefined auVar5 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN3std3env6var_os17h36cc7c7819522fd6E(&local_d8);
  _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h51a32f342f7d52feE
            (local_d8,CONCAT44(uStack_cc,uStack_d0));
  _ZN4core4iter6traits8iterator8Iterator4skip17h80fe793616a2e54cE(&local_60,param_1,param_2);
  uStack_80 = local_50;
  uStack_90 = local_60;
  uStack_8c = uStack_5c;
  uStack_88 = uStack_58;
  uStack_84 = uStack_54;
  local_a8 = -0x7fffffffffffffff;
                    /* try { // try from 001273b1 to 001273d3 has its CatchHandler @ 00127508 */
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h2c2a50d748de909aE(&local_a8,&uStack_90);
  lVar2 = local_a8;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h5fa58ea674f5acc7E
            (&local_d8,
             "-n/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
             ,2);
  uVar1 = CONCAT44(uStack_cc,uStack_d0);
  if ((lVar2 == -0x8000000000000000) ||
     (cVar3 = _ZN67__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_GT_2eq17h08c82ed25b2e05bfE
                        (CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_94,local_98),uVar1,local_c8),
     cVar3 == '\0')) {
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h209e065877f44192E
              (local_d8,uVar1);
    local_b8 = uStack_88;
    uStack_b4 = uStack_84;
    uStack_b0 = (undefined4)uStack_80;
    uStack_ac = uStack_80._4_4_;
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    local_d8 = local_a8;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    _ZN4core4iter6traits8iterator8Iterator7collect17h6af5e76be2411346E(&local_78,&local_d8);
    uVar4 = 1;
  }
  else {
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h209e065877f44192E
              (local_d8,uVar1);
    local_b8 = uStack_88;
    uStack_b4 = uStack_84;
    uStack_b0 = (undefined4)uStack_80;
    uStack_ac = uStack_80._4_4_;
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    local_d8 = local_a8;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    _ZN7uu_echo17filter_echo_flags17h5a59657466e082bcE(&local_48,&local_d8);
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_68 = local_38;
    uVar4 = 0;
  }
                    /* try { // try from 0012748d to 0012749f has its CatchHandler @ 00127522 */
  local_d8 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00173a30)();
  local_a8 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00173a38)(&local_d8);
  local_c8 = local_68;
  local_d8 = CONCAT44(uStack_74,local_78);
  uStack_d0 = uStack_70;
  uStack_cc = uStack_6c;
                    /* try { // try from 001274b8 to 001274cc has its CatchHandler @ 001274f3 */
  auVar5 = (*(code *)PTR__ZN7uu_echo7execute17h866d81bba2075ba9E_00173a40)
                     (&local_a8,&local_d8,uVar4,1);
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hb8166dfaaae947c0E(local_a8);
  return auVar5;
}