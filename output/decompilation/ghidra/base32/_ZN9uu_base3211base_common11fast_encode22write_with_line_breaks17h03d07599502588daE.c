long _ZN9uu_base3211base_common11fast_encode22write_with_line_breaks17h03d07599502588daE
               (long param_1,long param_2,undefined8 param_3,code *param_4,char param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  auVar4 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h690597712d12ddddE
                     (param_2);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17hc443a03f678429ffE
            (&local_58,auVar4._0_8_,auVar4._8_8_,uVar1,
             &PTR_s_src_uu_base32_src_base_common_rs_00249d00);
  auVar4 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdcf811b65d811e47E
                     (&local_58);
  lVar3 = 0;
  if (auVar4._0_8_ != 0) {
    do {
      lVar3 = lVar3 + auVar4._8_8_;
      uVar1 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hf7fbefd3dcf7d1e3E
                        (auVar4._0_8_,auVar4._8_8_ + auVar4._0_8_);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h9b9539e3bf19f411E(param_1,uVar1);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h84614a45e4b043b7E(param_1,10);
      auVar4 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdcf811b65d811e47E
                         (&local_58);
    } while (auVar4._0_8_ != 0);
  }
  lVar2 = (*param_4)(param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar2 == 0) {
    auVar4 = _ZN4core5slice5index5range17h13b88f50439834abE
                       (lVar3,*(undefined8 *)(param_2 + 0x18),&DAT_00249d18);
    local_48 = auVar4._0_8_;
    local_50 = auVar4._8_8_ - local_48;
    local_40 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = local_48;
    local_40 = local_40 - local_50;
    local_58 = param_2;
    local_38 = local_50;
    _ZN4core3ptr74drop_in_place_LT_alloc__collections__vec_deque__drain__Drain_LT_u8_GT__GT_17hc815a55db9c5807aE
              (&local_58);
    if (param_5 == '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else if (*(long *)(param_2 + 0x18) != 0) {
      uVar1 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17h690597712d12ddddE
                        (param_2);
      lVar3 = (*param_4)(param_3,uVar1);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = (*param_4)(param_3,
                         "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
                         ,1);
      return lVar3;
    }
    lVar2 = 0;
  }
  return lVar2;
}