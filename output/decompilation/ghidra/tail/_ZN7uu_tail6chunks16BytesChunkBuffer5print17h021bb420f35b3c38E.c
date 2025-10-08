undefined8
_ZN7uu_tail6chunks16BytesChunkBuffer5print17h021bb420f35b3c38E
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h5656e42254df2b37E
            (&local_50,param_1);
  puVar1 = PTR__ZN7uu_tail6chunks10BytesChunk10get_buffer17hb5949d2a788ba2a3E_0027d800;
  while ((puVar4 = local_40, puVar5 = local_50, local_50 != local_48 ||
         (bVar6 = local_40 != local_38, local_48 = local_38, local_38 = local_50, puVar4 = local_50,
         puVar5 = local_40, bVar6))) {
    uVar2 = (*(code *)puVar1)(*puVar5);
    lVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h7989dfaf5a9a1bc8E
                      (param_2,uVar2);
    local_50 = puVar5 + 1;
    local_40 = puVar4;
    if (lVar3 != 0) {
      uVar2 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
              )(lVar3);
      return uVar2;
    }
  }
  return 0;
}