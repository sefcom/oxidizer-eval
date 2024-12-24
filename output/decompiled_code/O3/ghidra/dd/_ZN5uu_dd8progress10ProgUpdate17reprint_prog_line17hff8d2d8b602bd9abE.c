undefined1 * __rustcall uu_dd::progress::ProgUpdate::reprint_prog_line(undefined8 param_1)

{
  undefined auVar1 [16];
  undefined1 *local_8;
  
  local_8 = std::io::stdio::stderr::INSTANCE;
  auVar1 = write_prog_line(param_1,&local_8,1);
  core::result::Result<T,E>::unwrap
            (auVar1._0_8_,auVar1._8_8_,&PTR_s_src_uu_dd_src_progress_rs_00262e80);
  return local_8;
}