undefined8 __rustcall uu_ls::dired::print_dired_output(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  code *local_48;
  undefined **local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_3);
  if (lVar1 == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      print_positions("//DIRED//",9,*(undefined8 *)(param_2 + 8));
    }
    if (*(char *)(param_1 + 0xe6) != '\0') {
      print_positions("//SUBDIRED//",0xc,*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)(param_2 + 0x28));
    }
    local_50 = param_1 + 0xf5;
    local_48 = _<uucore::features::quoting_style::QuotingStyle_as_core::fmt::Display>::fmt;
    local_40 = &PTR_s___DIRED_OPTIONS_____quoting_styl_00313328;
    local_38 = 2;
    local_20 = 0;
    local_30 = &local_50;
    local_28 = 1;
    std::io::stdio::_print(&local_40);
    uVar2 = 0;
  }
  else {
    uVar2 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar1);
  }
  return uVar2;
}