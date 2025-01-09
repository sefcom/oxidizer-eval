undefined1 * __rustcall
uu_dd::progress::ProgUpdate::print_transfer_stats(undefined8 param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined1 *local_8;
  
  local_8 = std::io::stdio::stderr::INSTANCE;
  auVar1 = write_transfer_stats(param_1,&local_8,param_2);
  core::result::Result<T,E>::unwrap
            (auVar1._0_8_,auVar1._8_8_,&PTR_s_src_uu_dd_src_progress_rs_002624e8);
  return local_8;
}