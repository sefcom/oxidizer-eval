void __rustcall uu_env::print_env(undefined param_1)

{
  undefined8 uVar1;
  undefined local_159;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e0;
  code *local_d8;
  undefined4 *local_d0;
  code *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_159 = param_1;
  local_150 = std::io::stdio::stdout();
  local_158 = std::io::stdio::Stderr::lock(&local_150);
                    /* try { // try from 001cc0e1 to 001cc0ee has its CatchHandler @ 001cc253 */
  std::env::vars(&local_50);
  local_f8 = local_40;
  uStack_f0 = uStack_38;
  local_108 = local_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  while( true ) {
                    /* try { // try from 001cc130 to 001cc142 has its CatchHandler @ 001cc276 */
    _<std::env::Vars_as_core::iter::traits::iterator::Iterator>::next(&local_80,&local_108);
    if (local_80 == -0x8000000000000000) break;
    local_138 = local_70;
    local_148 = local_80;
    uStack_140 = uStack_78;
    local_118 = local_58;
    local_128 = local_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = &local_159;
    local_b8 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00248f80;
    local_a8 = 3;
    local_90 = 0;
    local_a0 = &local_e0;
    local_98 = 3;
    local_e0 = &local_148;
    local_d0 = &local_128;
                    /* try { // try from 001cc205 to 001cc217 has its CatchHandler @ 001cc25d */
    uVar1 = std::io::Write::write_fmt(&local_158,&local_b0);
    core::result::Result<T,E>::unwrap(uVar1);
                    /* try { // try from 001cc218 to 001cc21f has its CatchHandler @ 001cc258 */
    core::ptr::drop_in_place<alloc::string::String>(&local_128);
                    /* try { // try from 001cc220 to 001cc227 has its CatchHandler @ 001cc276 */
    core::ptr::drop_in_place<alloc::string::String>(&local_148);
  }
                    /* try { // try from 001cc22d to 001cc236 has its CatchHandler @ 001cc253 */
  core::ptr::drop_in_place<std::env::Vars>(&local_108);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_158);
  return;
}