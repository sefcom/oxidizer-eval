undefined  [16] __rustcall
uu_more::more(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             long param_5,undefined8 param_6,long param_7,undefined8 param_8,long *param_9)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint extraout_EDX;
  uint uVar6;
  int iVar7;
  undefined auVar8 [16];
  ulong local_e0;
  char local_d8;
  undefined2 local_d6;
  int local_d4;
  char local_d0;
  char local_ce;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  short local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_ac = param_4;
  local_60 = param_5;
  local_58 = param_6;
  local_50 = param_2;
  crossterm::terminal::size(local_a8);
  uVar2 = core::result::Result<T,E>::unwrap(local_a8);
  uVar6 = extraout_EDX;
  if (*(short *)(param_9 + 4) != 0) {
    uVar6 = (uint)*(ushort *)((long)param_9 + 0x22);
  }
  break_buff(local_48,param_1,local_50,uVar2);
  Pager::new(local_a8,uVar6,local_48,param_7,param_8,param_9);
  cVar1 = (char)local_ac;
  uVar5 = local_90;
  if (*param_9 != -0x8000000000000000) {
                    /* try { // try from 001dd120 to 001dd192 has its CatchHandler @ 001dd564 */
    auVar8 = search_pattern_in_file(local_a0,local_98,param_9);
    uVar5 = auVar8._8_8_;
    if (auVar8._0_8_ == 0) {
      lVar3 = crossterm::command::write_command_ansi(param_3,4);
      if (((lVar3 != 0) ||
          (lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(param_3), lVar3 != 0)) ||
         (lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::write_all(param_3,&DAT_00118e3f,0x13)
         , lVar3 != 0)) {
        auVar8 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(lVar3);
        uVar5 = auVar8._8_8_;
        lVar3 = auVar8._0_8_;
        goto LAB_001dd50b;
      }
      local_68 = local_68 + -1;
      uVar5 = local_90;
    }
  }
  local_90 = uVar5;
  if (cVar1 != '\0') {
    lVar3 = crossterm::command::write_command_ansi(param_3,4);
    if (lVar3 == 0) {
      lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(param_3);
    }
    core::result::Result<T,E>::unwrap(lVar3,&PTR_DAT_002638f8);
    uVar5 = local_58;
    if (local_60 == 0) {
      uVar5 = 0;
    }
    lVar3 = 1;
    if (local_60 != 0) {
      lVar3 = local_60;
    }
    ::alloc::str::_<impl_str>::replace(&local_c8,lVar3,uVar5);
                    /* try { // try from 001dd19d to 001dd1b3 has its CatchHandler @ 001dd553 */
    lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::write_all(param_3,local_c0,local_b8);
    if (lVar3 != 0) {
      auVar8 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(lVar3);
      lVar3 = auVar8._0_8_;
                    /* try { // try from 001dd1b4 to 001dd23f has its CatchHandler @ 001dd564 */
      core::ptr::drop_in_place<alloc::string::String>(&local_c8);
      uVar5 = auVar8._8_8_;
      goto LAB_001dd50b;
    }
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
    local_68 = local_68 + -3;
  }
  Pager::draw(local_a8,param_3,&UINT_00110000);
  if (cVar1 != '\0') {
    param_9[3] = 0;
    local_68 = local_68 + 3;
  }
  cVar1 = Pager::should_close(local_a8);
  if ((param_7 == 0) && (cVar1 != '\0')) {
    lVar3 = 0;
    uVar5 = param_1;
LAB_001dd50b:
    core::ptr::drop_in_place<uu_more::Pager>(local_a8);
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
LAB_001dd28a:
  do {
    crossterm::event::poll(&local_c8,0,10000000);
    cVar1 = core::result::Result<T,E>::unwrap(&local_c8);
  } while (cVar1 == '\0');
  crossterm::event::read(&local_c8);
  core::result::Result<T,E>::unwrap(&local_e0);
  uVar4 = 4;
  if ((local_e0 ^ 0x8000000000000000) < 6) {
    uVar4 = local_e0 ^ 0x8000000000000000;
  }
  if (uVar4 != 2) {
    if (uVar4 == 5) {
      Pager::page_resize(local_a8,local_d6,*(undefined4 *)(param_9 + 4));
      goto LAB_001dd2fc;
    }
    goto switchD_001dd443_caseD_6;
  }
  iVar7 = local_d4;
  if (local_ce == '\0') {
    if (local_d8 != '\x0f') goto code_r0x001dd435;
    if (local_d0 != '\x02') {
      if (local_d0 != '\0') goto LAB_001dd481;
      if (local_d4 == 0x71) goto LAB_001dd543;
      goto LAB_001dd48d;
    }
    if (local_d4 == 99) {
LAB_001dd543:
                    /* try { // try from 001dd543 to 001dd552 has its CatchHandler @ 001dd566 */
      reset_term(param_3);
      uVar5 = std::process::exit(0);
                    /* catch() { ... } // from try @ 001dd19d with catch @ 001dd553 */
                    /* try { // try from 001dd556 to 001dd581 has its CatchHandler @ 001dd58a */
      core::ptr::drop_in_place<alloc::string::String>(&local_c8);
      core::ptr::drop_in_place<uu_more::Pager>(local_a8);
      auVar8 = _Unwind_Resume(uVar5);
      return auVar8;
    }
    goto LAB_001dd301;
  }
  if (local_ce == '\x02') goto switchD_001dd443_caseD_6;
code_r0x001dd435:
  switch(local_d8) {
  case '\x04':
  case '\b':
    if (local_d0 != '\0') goto switchD_001dd443_caseD_6;
    Pager::page_up(local_a8);
                    /* try { // try from 001dd45e to 001dd465 has its CatchHandler @ 001dd562 */
    auVar8 = paging_add_back_message(*(undefined4 *)(param_9 + 4),param_3);
    uVar5 = auVar8._8_8_;
    lVar3 = auVar8._0_8_;
    iVar7 = 0x110000;
    if (lVar3 != 0) goto LAB_001dd501;
    break;
  case '\x05':
  case '\t':
    if (local_d0 != '\0') goto switchD_001dd443_caseD_6;
LAB_001dd4bd:
    cVar1 = Pager::should_close(local_a8);
    if (cVar1 != '\0') {
LAB_001dd4f9:
      lVar3 = 0;
      uVar5 = param_1;
LAB_001dd501:
                    /* try { // try from 001dd501 to 001dd50a has its CatchHandler @ 001dd564 */
      core::ptr::drop_in_place<crossterm::event::Event>(&local_e0);
      goto LAB_001dd50b;
    }
    Pager::page_down(local_a8);
LAB_001dd2fc:
    iVar7 = 0x110000;
    break;
  default:
    goto switchD_001dd443_caseD_6;
  case '\x0f':
LAB_001dd481:
    if (local_d0 == '\0') {
LAB_001dd48d:
      if (local_d4 == 0x20) goto LAB_001dd4bd;
      if (local_d4 == 0x6b) {
        Pager::prev_line(local_a8);
      }
      else {
        if (local_d4 != 0x6a) break;
        cVar1 = Pager::should_close(local_a8);
        if (cVar1 != '\0') goto LAB_001dd4f9;
        Pager::next_line(local_a8);
      }
      goto LAB_001dd2fc;
    }
  }
LAB_001dd301:
  core::ptr::drop_in_place<crossterm::event::Event>(&local_e0);
  if (*(char *)((long)param_9 + 0x25) == '\0') {
    if (*(char *)((long)param_9 + 0x24) != '\0') {
      local_e0 = std::io::stdio::stdout();
      lVar3 = crossterm::command::write_command_ansi(&local_e0,0);
      if ((lVar3 == 0) &&
         (lVar3 = crossterm::command::write_command_ansi(&local_e0,0,0), lVar3 == 0)) {
        local_c8 = std::io::stdio::stdout();
        lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(&local_c8);
      }
      core::result::Result<T,E>::unwrap(lVar3,&PTR_DAT_00263940);
    }
  }
  else {
    local_e0 = std::io::stdio::stdout();
    lVar3 = crossterm::command::write_command_ansi(&local_e0,0,0);
    if ((lVar3 == 0) && (lVar3 = crossterm::command::write_command_ansi(&local_e0,2), lVar3 == 0)) {
      local_c8 = std::io::stdio::stdout();
      lVar3 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(&local_c8);
    }
    core::result::Result<T,E>::unwrap(lVar3,&PTR_DAT_00263958);
  }
  Pager::draw(local_a8,param_3,iVar7);
  goto LAB_001dd28a;
switchD_001dd443_caseD_6:
                    /* try { // try from 001dd280 to 001dd3f4 has its CatchHandler @ 001dd575 */
  core::ptr::drop_in_place<crossterm::event::Event>(&local_e0);
  goto LAB_001dd28a;
}