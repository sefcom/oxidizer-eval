void __rustcall uu_tail::follow::files::FileHandling::reset_reader(void)

{
  long lVar1;
  
  lVar1 = get_mut();
                    /* try { // try from 0020ea67 to 0020ea6b has its CatchHandler @ 0020ea79 */
  core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::BufRead>>>
            (*(undefined8 *)(lVar1 + 200),*(undefined8 *)(lVar1 + 0xd0));
  *(undefined8 *)(lVar1 + 200) = 0;
  return;
}