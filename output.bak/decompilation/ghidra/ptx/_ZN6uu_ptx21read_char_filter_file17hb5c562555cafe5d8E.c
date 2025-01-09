void __rustcall uu_ptx::read_char_filter_file(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  int local_64;
  undefined8 local_60;
  long local_58;
  long local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_48,param_2,"break-file",10);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap("break-file",10,&local_48);
  if (lVar1 != 0) {
    std::fs::File::open(&local_48,lVar1);
    if (local_48 == 0) {
      local_64 = iStack_44;
      local_60 = 0;
      local_58 = 1;
      local_50 = 0;
                    /* try { // try from 002b59fd to 002b5a0c has its CatchHandler @ 002b5a96 */
      auVar3 = _<std::fs::File_as_std::io::Read>::read_to_string(&local_64,&local_60);
      if (auVar3._0_8_ == 0) {
                    /* try { // try from 002b5a36 to 002b5a3f has its CatchHandler @ 002b5a96 */
        _<std::collections::hash::set::HashSet<T,S>as_core::iter::traits::collect::FromIterator<T>>
        ::from_iter(&local_48,local_58,local_50 + local_58);
        param_1[8] = local_28;
        param_1[9] = iStack_24;
        param_1[10] = iStack_20;
        param_1[0xb] = iStack_1c;
        param_1[4] = local_38;
        param_1[5] = iStack_34;
        param_1[6] = iStack_30;
        param_1[7] = iStack_2c;
        *param_1 = local_48;
        param_1[1] = iStack_44;
        param_1[2] = iStack_40;
        param_1[3] = iStack_3c;
                    /* try { // try from 002b5a5a to 002b5a63 has its CatchHandler @ 002b5a91 */
        core::ptr::drop_in_place<alloc::string::String>(&local_60);
      }
      else {
        *(long *)(param_1 + 2) = auVar3._8_8_;
        param_1[0] = 0;
        param_1[1] = 0;
                    /* try { // try from 002b5a1d to 002b5a26 has its CatchHandler @ 002b5a91 */
        core::ptr::drop_in_place<alloc::string::String>(&local_60);
      }
      core::ptr::drop_in_place<std::fs::File>(&local_64);
    }
    else {
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_3c,iStack_40);
      param_1[0] = 0;
      param_1[1] = 0;
    }
    return;
  }
  uVar2 = core::option::expect_failed
                    ("parsing options failed!",0x17,&PTR_s_src_uu_ptx_src_ptx_rs_003edb80);
                    /* catch() { ... } // from try @ 002b5a1d with catch @ 002b5a91
                       catch() { ... } // from try @ 002b5a5a with catch @ 002b5a91 */
  core::ptr::drop_in_place<std::fs::File>(&local_64);
  _Unwind_Resume(uVar2);
  return;
}