long __rustcall uu_tail::follow::watch::Observer::start(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined local_160 [16];
  undefined *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined local_90 [40];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_2 + 0x4c) != '\x02') {
    std::sync::mpmc::channel(&local_1a8);
    local_150 = local_1a8;
    local_148 = uStack_1a0;
    local_140 = (undefined4)local_198;
    uStack_13c = local_198._4_4_;
    uStack_138 = (undefined4)uStack_190;
    uStack_134 = uStack_190._4_4_;
    local_b8 = *(undefined8 *)(param_2 + 0x30);
    local_b0 = *(undefined4 *)(param_2 + 0x38);
    local_a8 = 1;
    if (*(char *)((long)param_1 + 0x8d) == '\0') {
      local_160 = _<std::sync::mpmc::Sender<T>as_core::clone::Clone>::clone(&local_150);
                    /* try { // try from 00205591 to 002055ad has its CatchHandler @ 00205976 */
      uVar4 = ::alloc::boxed::Box<T>::new(local_150,local_148);
      notify::inotify::INotifyWatcher::from_event_handler
                (&local_130,uVar4,
                 &
                 PTR_drop_in_place<std_sync_mpsc_Sender<core_result_Result<notify_event_Event,notify_error_Error>>>_002bbe60
                );
      if (local_130 == 6) {
        local_68 = uStack_128;
        uStack_64 = uStack_124;
        uStack_60 = uStack_120;
        uStack_5c = uStack_11c;
                    /* try { // try from 002055de to 002055ed has its CatchHandler @ 0020594d */
        uVar4 = ::alloc::boxed::Box<T>::new(&local_68);
        ppuVar6 = &PTR_drop_in_place<notify_inotify_INotifyWatcher>_002bbe80;
                    /* try { // try from 002055fb to 0020560d has its CatchHandler @ 002059b2 */
        core::ptr::
        drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>
                  (local_160);
      }
      else {
                    /* try { // try from 00205619 to 0020562d has its CatchHandler @ 0020594d */
        _<T_as_alloc::string::ToString>::to_string(&local_1a8,&local_130);
                    /* try { // try from 00205638 to 00205648 has its CatchHandler @ 00205920 */
        cVar3 = core::slice::_<impl[T]>::starts_with(uStack_1a0,local_198,&DAT_00129842,0x13);
        if (cVar3 == '\0') {
                    /* try { // try from 00205841 to 0020584d has its CatchHandler @ 0020594d */
          core::ptr::drop_in_place<alloc::string::String>(&local_1a8);
          local_178 = local_100;
          uStack_180 = uStack_108;
          uStack_17c = uStack_104;
                    /* try { // try from 00205882 to 002058cb has its CatchHandler @ 00205911 */
          _<T_as_alloc::string::ToString>::to_string(&local_48,&local_1a8);
          uStack_e0 = 1;
          local_f8 = local_48;
          uStack_f4 = uStack_44;
          uStack_f0 = uStack_40;
          uStack_ec = uStack_3c;
          local_e8 = local_38;
          lVar5 = ::alloc::boxed::Box<T>::new(&local_f8);
                    /* try { // try from 002058d5 to 002058e1 has its CatchHandler @ 0020594d */
          core::ptr::drop_in_place<notify::error::Error>(&local_1a8);
                    /* try { // try from 002058eb to 002058f7 has its CatchHandler @ 002059b2 */
          core::ptr::
          drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>
                    (local_160);
          core::ptr::
          drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify::event::Event,notify::error::Error>>>
                    (&local_140);
          return lVar5;
        }
                    /* try { // try from 00205654 to 00205660 has its CatchHandler @ 0020594d */
        core::ptr::drop_in_place<alloc::string::String>(&local_1a8);
        local_c8 = local_100;
        local_d8 = local_110;
        uStack_d4 = uStack_10c;
        uStack_d0 = uStack_108;
        uStack_cc = uStack_104;
        uStack_e0 = uStack_118;
        uStack_dc = uStack_114;
        local_f8 = local_130;
        uStack_f4 = uStack_12c;
        uStack_f0 = uStack_128;
        uStack_ec = uStack_124;
                    /* try { // try from 002056a4 to 002057c4 has its CatchHandler @ 00205938 */
        local_90._0_16_ = uucore::util_name();
        local_98 = _<&T_as_core::fmt::Display>::fmt;
        local_1a8 = &DAT_002bbe20;
        uStack_1a0 = 2;
        local_188 = 0;
        local_198 = &local_a0;
        uStack_190 = 1;
        local_a0 = (undefined8 *)local_90;
        std::io::stdio::_eprint(&local_1a8);
        local_90._0_8_ = &PTR_DAT_002bbeb0;
        local_90._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_1a8 = &DAT_002bbe40;
        uStack_1a0 = 2;
        local_188 = 0;
        uStack_190 = 1;
        local_198 = (undefined8 **)local_90;
        std::io::stdio::_eprint(&local_1a8);
        uucore::mods::error::set_exit_code(1);
        *(undefined *)((long)param_1 + 0x8d) = 1;
        notify::poll::PollWatcher::new(&local_1a8,local_160._0_8_,local_160._8_8_,&local_b8);
        core::result::Result<T,E>::unwrap(local_90,&local_1a8,&PTR_DAT_002bbec0);
        local_168 = ::alloc::boxed::Box<T>::new(local_90);
                    /* try { // try from 002057ca to 002057d9 has its CatchHandler @ 0020594d */
        core::ptr::drop_in_place<notify::error::Error>(&local_f8);
        ppuVar6 = &PTR_drop_in_place<notify_poll_PollWatcher>_002bbed8;
        uVar4 = local_168;
      }
    }
    else {
      *(undefined *)((long)param_1 + 0x8d) = 1;
                    /* try { // try from 00205511 to 0020557c has its CatchHandler @ 002059b2 */
      notify::poll::PollWatcher::new(&local_1a8,local_1a8,uStack_1a0,&local_b8);
      core::result::Result<T,E>::unwrap(&local_f8,&local_1a8,&PTR_DAT_002bbf08);
      uVar4 = ::alloc::boxed::Box<T>::new(&local_f8);
      ppuVar6 = &PTR_drop_in_place<notify_poll_PollWatcher>_002bbed8;
    }
    uVar1 = CONCAT44(uStack_13c,local_140);
    uVar2 = CONCAT44(uStack_134,uStack_138);
                    /* try { // try from 002057f3 to 002057fa has its CatchHandler @ 00205998 */
    core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(param_1);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = ppuVar6;
                    /* try { // try from 0020581d to 00205827 has its CatchHandler @ 002059b2 */
    lVar5 = init_files(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  return 0;
}