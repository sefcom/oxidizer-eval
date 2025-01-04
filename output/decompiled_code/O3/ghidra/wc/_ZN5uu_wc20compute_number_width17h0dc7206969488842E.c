undefined8 __rustcall uu_wc::compute_number_width(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  uint local_a8;
  long local_90;
  
  if (*param_1 == 0) {
    iVar1 = Settings::number_enabled(param_2);
    uVar4 = 7;
    if (iVar1 == 1) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
    if ((int)*param_1 == 1) {
      iVar1 = Settings::number_enabled(param_2);
      if ((iVar1 != 1) || (param_1[3] != 1)) {
        local_f0 = param_1[2];
        local_e8 = local_f0 + param_1[3] * 0x18;
        plVar2 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_f0);
        if (plVar2 != (long *)0x0) {
          uVar4 = 1;
          lVar5 = 0;
          do {
            if (*plVar2 == -0x7fffffffffffffff) {
              uVar4 = 7;
            }
            else {
              std::fs::metadata(&local_e0,plVar2);
              if (local_e0 != 2) {
                lVar3 = local_90;
                if ((local_a8 & 0xf000) != 0x8000) {
                  uVar4 = 7;
                  lVar3 = 0;
                }
                lVar5 = lVar5 + lVar3;
              }
              core::ptr::
              drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                        (local_e0,local_d8);
            }
            plVar2 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>
                             ::next(&local_f0);
          } while (plVar2 != (long *)0x0);
          if (lVar5 != 0) {
            iVar1 = core::num::int_log10::u64(lVar5);
            uVar4 = core::cmp::max_by(iVar1 + 1,uVar4);
            return uVar4;
          }
        }
      }
    }
  }
  return uVar4;
}