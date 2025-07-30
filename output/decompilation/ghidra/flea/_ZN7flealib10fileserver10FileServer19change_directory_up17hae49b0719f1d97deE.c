undefined8 *
_ZN7flealib10fileserver10FileServer19change_directory_up17hae49b0719f1d97deE
          (undefined8 *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined8 local_18;
  
  lVar1 = (*(code *)PTR__ZN3std4path4Path6parent17h9c632a6976e19e68E_00828238)
                    (*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  if (lVar1 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (param_1,"Already at root",0xf);
  }
  else {
    (*(code *)
      PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
    )(&local_28,lVar1);
    if ((local_28 & 1) != 0) {
      uVar2 = (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
                        (&PTR_s_flealib_src_fileserver_rs_00809910);
                    /* catch() { ... } // from try @ 0047ae14 with catch @ 0047ae68 */
      *(undefined8 *)(param_2 + 4) = local_18;
      *param_2 = local_28;
      param_2[1] = uStack_24;
      param_2[2] = uStack_20;
      param_2[3] = uStack_1c;
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_28,CONCAT44(uStack_1c,uStack_20),local_18);
                    /* try { // try from 0047ae14 to 0047ae1b has its CatchHandler @ 0047ae68 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_2);
    *(undefined8 *)(param_2 + 4) = local_18;
    *(ulong *)param_2 = CONCAT44(uStack_24,local_28);
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_1c,uStack_20);
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}