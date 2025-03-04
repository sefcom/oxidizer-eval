long _ZN7uu_tail6chunks10BytesChunk10from_chunk17hb6067992a01f279aE
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auStack_2028 [4096];
  undefined8 local_1028;
  
  local_1028 = 0;
  lVar1 = *(ulong *)(param_2 + 0x2000) - param_3;
  if (*(ulong *)(param_2 + 0x2000) < param_3 || lVar1 == 0) {
    lVar1 = 0;
    (*(code *)PTR_memset_002c2d40)(param_1,0,0x2000);
  }
  else {
    (*(code *)PTR_memset_002c2d40)(auStack_2028,0,0x2000);
    auVar2 = _ZN7uu_tail6chunks10BytesChunk15get_buffer_with17h6c35c4ec60c3e618E(param_2,param_3);
    auVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h35a90b0741e32d81E
                       (auVar2._8_8_,auStack_2028,0x2000,&PTR_s_src_uu_tail_src_chunks_rs_002bc818);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h7aca70a510aabb2cE
              (auVar3._0_8_,auVar3._8_8_,auVar2._0_8_,auVar2._8_8_,
               &PTR_s_src_uu_tail_src_chunks_rs_002bc830);
    (*(code *)PTR_memcpy_002c2760)(param_1,auStack_2028,0x2000);
  }
  *(long *)(param_1 + 0x2000) = lVar1;
  return param_1;
}