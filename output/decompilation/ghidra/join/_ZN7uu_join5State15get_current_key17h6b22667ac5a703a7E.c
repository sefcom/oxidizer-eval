void __rustcall uu_join::State::get_current_key(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    Line::get_field(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(0,0,&PTR_s_src_uu_join_src_join_rs_00235450);
}