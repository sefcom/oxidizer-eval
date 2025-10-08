long * _ZN5uu_pr2pr17h5485419cf3c9b0aeE
                 (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_68 [56];
  
  _ZN5uu_pr4open17hde771125822bcd7aE(&local_c8);
  if (CONCAT44(uStack_c4,local_c8) == -0x7ffffffffffffffb) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hede0d348de07a176E(local_68);
    uVar1 = _ZN5uu_pr28read_stream_and_create_pages17h546541715f29f024E(param_4,local_68,0);
                    /* try { // try from 00236310 to 0023631a has its CatchHandler @ 002363f1 */
    while (_ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h51eab1bbfc549aafE
                     (&local_88,uVar1), CONCAT44(uStack_7c,local_80) != -0x8000000000000000) {
      local_a8 = local_80;
      uStack_a4 = uStack_7c;
      uStack_a0 = uStack_78;
      uStack_9c = uStack_74;
      local_98 = local_70;
                    /* try { // try from 00236343 to 0023634a has its CatchHandler @ 002363e2 */
      auVar2 = _ZN5uu_pr10print_page17hc11615535955301dE
                         (CONCAT44(uStack_74,uStack_78),local_70,param_4,local_88 + 1);
      if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 00236394 to 0023639f has its CatchHandler @ 002363e0 */
        (*(code *)
          PTR__ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h216bf08d6106c8bbE_00398ba8
        )(&local_c8,auVar2._8_8_);
        *(undefined4 *)(param_1 + 2) = local_b8;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_b4;
        *(undefined4 *)(param_1 + 3) = uStack_b0;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_ac;
        *(undefined4 *)param_1 = local_c8;
        *(undefined4 *)((long)param_1 + 4) = uStack_c4;
        *(undefined4 *)(param_1 + 1) = uStack_c0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_bc;
                    /* try { // try from 002363b0 to 002363b9 has its CatchHandler @ 002363de */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17hdc8372bef9543cb5E
                  (&local_a8);
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hddd4d76a723283f5E
                  (uVar1,&
                         PTR__ZN4core3ptr848drop_in_place_LT_core__iter__adapters__take_while__TakeWhile_LT_core__iter__adapters__skip_while__SkipWhile_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__flatten__Flatten_LT_itertools__adaptors__Batching_LT_core__iter__adapters__map__Map_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__flatten__FlatMap_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__split_lines_if_form_feed_GT__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__GT__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__GT_17hf850f4dbf2fb0f4eE_003694e0
                  );
        return param_1;
      }
                    /* try { // try from 0023634f to 00236356 has its CatchHandler @ 002363f1 */
      _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17hdc8372bef9543cb5E
                (&local_80);
    }
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hddd4d76a723283f5E
              (uVar1,&
                     PTR__ZN4core3ptr848drop_in_place_LT_core__iter__adapters__take_while__TakeWhile_LT_core__iter__adapters__skip_while__SkipWhile_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__flatten__Flatten_LT_itertools__adaptors__Batching_LT_core__iter__adapters__map__Map_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__flatten__FlatMap_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__split_lines_if_form_feed_GT__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__GT__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__read_stream_and_create_pages___u7b__u7b_closure_u7d__u7d__GT__GT_17hf850f4dbf2fb0f4eE_003694e0
              );
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffb;
  }
  else {
    *param_1 = CONCAT44(uStack_c4,local_c8);
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    param_1[2] = CONCAT44(uStack_b4,local_b8);
    param_1[3] = CONCAT44(uStack_ac,uStack_b0);
  }
  return param_1;
}