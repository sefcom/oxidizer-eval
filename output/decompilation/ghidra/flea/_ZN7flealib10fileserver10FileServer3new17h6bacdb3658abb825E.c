uint * _ZN7flealib10fileserver10FileServer3new17h6bacdb3658abb825E(uint *param_1)

{
  code *pcVar1;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  (*(code *)PTR__ZN3std3env11current_dir17h40c04c259438f175E_008267a8)(&local_40);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd09044e2a73fecedE(local_28,&local_40);
                    /* try { // try from 0047a8df to 0047a904 has its CatchHandler @ 0047a93a */
  (*(code *)
    PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
  )(&local_40,local_20,local_18);
  if ((local_40 & 1) == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_40,CONCAT44(uStack_34,uStack_38),local_30);
    *(undefined8 *)(param_1 + 4) = local_30;
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h2f706af944357a81E(local_28);
    return param_1;
  }
                    /* try { // try from 0047a92b to 0047a937 has its CatchHandler @ 0047a93a */
  (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
            (&PTR_s_flealib_src_fileserver_rs_00809898);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}