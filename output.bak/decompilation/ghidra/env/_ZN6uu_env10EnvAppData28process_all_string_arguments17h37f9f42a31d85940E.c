undefined8 * __rustcall
uu_env::EnvAppData::process_all_string_arguments
          (undefined8 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_78 = 0;
  uStack_70 = 8;
  local_68 = 0;
  local_58 = *(long *)(param_3 + 8);
  local_50 = local_58 + *(long *)(param_3 + 0x10) * 0x18;
  local_80 = param_1;
  local_60 = param_3;
  lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_58);
  if (lVar2 != 0) {
    do {
                    /* try { // try from 001cdd08 to 001cde4e has its CatchHandler @ 001cdea7 */
      check_and_handle_string_args
                (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012492c,
                 0xe,&local_78,0);
      lVar3 = CONCAT44(uStack_94,local_98);
      if (lVar3 != 0) {
LAB_001cde6c:
        puVar1 = local_80;
        local_80[1] = lVar3;
        local_80[2] = CONCAT44(uStack_8c,uStack_90);
        *local_80 = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_78);
        return puVar1;
      }
      if ((char)uStack_90 == '\0') {
        check_and_handle_string_args
                  (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012493a,
                   2,&local_78,0);
        lVar3 = CONCAT44(uStack_94,local_98);
        if (lVar3 != 0) goto LAB_001cde6c;
        if ((char)uStack_90 != '\0') goto LAB_001cdd76;
        check_and_handle_string_args
                  (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012493c,
                   3,&local_78,0);
        lVar3 = CONCAT44(uStack_94,local_98);
        if (lVar3 != 0) goto LAB_001cde6c;
        if ((char)uStack_90 == '\0') {
          check_and_handle_string_args
                    (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),"-vvSAuto",4
                     ,&local_78,local_60);
          lVar3 = CONCAT44(uStack_94,local_98);
          if (lVar3 != 0) goto LAB_001cde6c;
          if ((char)uStack_90 == '\0') {
            _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_98,lVar2);
            local_38 = local_88;
            local_48 = local_98;
            uStack_44 = uStack_94;
            uStack_40 = uStack_90;
            uStack_3c = uStack_8c;
            ::alloc::vec::Vec<T,A>::push(&local_78,&local_48);
          }
          else {
            *param_2 = 0x101;
            *(undefined *)(param_2 + 1) = 0;
          }
        }
        else {
          *param_2 = 0x101;
        }
      }
      else {
LAB_001cdd76:
        *(undefined *)((long)param_2 + 1) = 1;
      }
      lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_58);
    } while (lVar2 != 0);
  }
  local_80[2] = local_68;
  *local_80 = local_78;
  local_80[1] = uStack_70;
  return local_80;
}