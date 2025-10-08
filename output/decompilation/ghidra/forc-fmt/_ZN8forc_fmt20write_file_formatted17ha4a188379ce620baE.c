undefined8 _ZN8forc_fmt20write_file_formatted17ha4a188379ce620baE(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _ZN3std2fs5write17h0b6e985e20ca1286E();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h49e8656b8ef808edE
                    (lVar1);
  return uVar2;
}