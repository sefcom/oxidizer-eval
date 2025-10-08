long _ZN9uu_base3211base_common11fast_encode22write_with_line_breaks17ha97bbfa18a6fd8e1E
               (long param_1,long param_2,undefined8 param_3,code *param_4,char param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  auVar4 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hf17d47ca8c7d0746E
                     (param_2);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12chunks_exact17h851c5b7066f706ddE
            (&local_58,auVar4._0_8_,auVar4._8_8_,uVar2,
             &PTR_s_src_uu_base32_src_base_common_rs_0020e200);
  auVar4 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c59ef229e894e03E
                     (&local_58);
  lVar3 = 0;
  if (auVar4._0_8_ != 0) {
    do {
      lVar3 = lVar3 + auVar4._8_8_;
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1493bff208258dcbE
                (param_1,auVar4._0_8_,auVar4._8_8_ + auVar4._0_8_);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb7f4b0d6baf1c53E
                (param_1,10,&PTR_s_src_uu_base32_src_base_common_rs_0020e230);
      auVar4 = _ZN98__LT_core__slice__iter__ChunksExact_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8c59ef229e894e03E
                         (&local_58);
    } while (auVar4._0_8_ != 0);
  }
  lVar1 = (*param_4)(param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    local_50 = _ZN4core5slice5index5range17h5490af02fc4e52e4E(lVar3,lVar1);
    *(undefined8 *)(param_2 + 0x18) = 0;
    local_40 = lVar1 - local_50;
    local_48 = 0;
    local_58 = param_2;
    local_38 = local_50;
    _ZN4core3ptr74drop_in_place_LT_alloc__collections__vec_deque__drain__Drain_LT_u8_GT__GT_17h42dbf5a25c59dfe4E
              (&local_58);
    if (param_5 == '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else if (*(long *)(param_2 + 0x18) != 0) {
      uVar2 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_15make_contiguous17hf17d47ca8c7d0746E
                        (param_2);
      lVar3 = (*param_4)(param_3,uVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = (*param_4)(param_3,"\n",1);
      return lVar3;
    }
    lVar1 = 0;
  }
  return lVar1;
}