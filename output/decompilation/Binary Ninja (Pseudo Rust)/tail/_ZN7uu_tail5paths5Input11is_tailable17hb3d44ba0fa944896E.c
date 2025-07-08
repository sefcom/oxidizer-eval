
  fn uu_tail::paths::Input::is_tailable::hb3d44ba0fa944896(arg1: *mut c_void) -> u64

{
    if *arg1.byte_offset(0x18) != -0x8000000000000000
    {
        /* tailcall */
        return uu_tail::paths::path_is_tailable::h49529ca9961beb32(*arg1.byte_offset(0x20), 
            *arg1.byte_offset(0x28));
    }
    
    let mut var_20: ();
    uu_tail::paths::Input::resolve::h81e1f38162942b9d(&var_20, arg1);
    core::option::Option$LT$T$GT$::map_or::h79f8bc23ef2e4ca1(&var_20)
}
