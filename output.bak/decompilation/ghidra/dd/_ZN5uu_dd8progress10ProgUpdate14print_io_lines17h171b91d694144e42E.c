undefined1 * __rustcall uu_dd::progress::ProgUpdate::print_io_lines(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *local_8;
  
  local_8 = std::io::stdio::stderr::INSTANCE;
  uVar1 = write_io_lines(param_1,&local_8);
  core::result::Result<T,E>::unwrap(uVar1);
  return local_8;
}