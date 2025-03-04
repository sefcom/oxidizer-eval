void _ZN5uu_wc6Inputs8try_iter17he58c0dff5beb00a3E(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long local_e0;
  undefined local_d8;
  undefined7 uStack_d7;
  long lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  long lStack_80;
  long local_78 [2];
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    local_e0 = -0x7fffffffffffffff;
    local_d8 = 1;
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb1b1f7e97a75751aE(&local_e0);
    ppuVar3 = &
              PTR__ZN4core3ptr163drop_in_place_LT_core__iter__sources__once__Once_LT_core__result__Result_LT_uu_wc__Input_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_17h389fa6ecd96db3e8E_00231000
    ;
  }
  else if ((int)*param_2 == 1) {
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hca89ae0b97a778fbE
                      (param_2[2],param_2[2] + param_2[3] * 0x18);
    ppuVar3 = (undefined **)&DAT_00231038;
  }
  else if (param_2[1] == -0x7fffffffffffffff) {
    _ZN5uu_wc17files0_iter_stdin17h027d8be6f7e7f770E(&local_e0);
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf248821590b359dbE(&local_e0);
    ppuVar3 = &
              PTR__ZN4core3ptr239drop_in_place_LT_core__iter__adapters__map__Map_LT_core__iter__sources__from_fn__FromFn_LT_uu_wc__files0_iter_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__C_uu_wc__files0_iter_stdin___u7b__u7b_closure_u7d__u7d__GT__GT_17h119c41dc4d7d12a9E_002310a8
    ;
  }
  else {
    _ZN5uu_wc16files0_iter_file17h4e3b8ab8e030dfcaE(&local_e0,param_2[2],param_2[3]);
    if (local_e0 == -0x7fffffffffffffff) {
      param_1[1] = CONCAT71(uStack_d7,local_d8);
      param_1[2] = lStack_d0;
      *param_1 = -0x7ffffffffffffffd;
      return;
    }
    local_30 = local_98;
    local_40 = local_a8;
    uStack_3c = uStack_a4;
    uStack_38 = uStack_a0;
    uStack_34 = uStack_9c;
    local_50 = local_b8;
    uStack_4c = uStack_b4;
    uStack_48 = uStack_b0;
    uStack_44 = uStack_ac;
    local_60 = local_c8;
    uStack_5c = uStack_c4;
    uStack_58 = uStack_c0;
    uStack_54 = uStack_bc;
    local_78[0] = local_e0;
    local_68 = lStack_d0;
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a205305a0670f0bE(local_78);
    ppuVar3 = &
              PTR__ZN4core3ptr133drop_in_place_LT_core__iter__sources__from_fn__FromFn_LT_uu_wc__files0_iter_LT_std__fs__File_GT____u7b__u7b_closure_u7d__u7d__GT__GT_17h904aa35cd2bb8e82E_00231070
    ;
  }
  lVar2 = -0x7ffffffffffffffe;
  if (*param_3 != -0x7ffffffffffffffe) {
    _ZN4core3ops8function6FnOnce9call_once17h817deecf557940d0E(&local_e0,param_3);
    local_88 = CONCAT71(uStack_d7,local_d8);
    lStack_80 = lStack_d0;
    lVar2 = local_e0;
  }
  *param_1 = lVar2;
  param_1[1] = local_88;
  param_1[2] = lStack_80;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  param_1[5] = 0;
  return;
}