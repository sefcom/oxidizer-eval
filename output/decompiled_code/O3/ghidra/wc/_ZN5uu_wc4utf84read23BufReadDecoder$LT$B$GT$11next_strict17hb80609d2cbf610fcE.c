undefined8 * __rustcall
uu_wc::utf8::read::BufReadDecoder<B>::next_strict(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_48;
  ulong local_40;
  byte local_38;
  byte local_37;
  
  lVar1 = param_2 + 0x18;
LAB_001c2bd0:
  do {
    if (*(long *)(param_2 + 0x10) != 0) {
      _<std::io::stdio::StdinLock_as_std::io::BufRead>::consume(param_2);
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    _<std::io::stdio::StdinLock_as_std::io::BufRead>::fill_buf(&local_48,param_2);
    uVar6 = local_40;
    lVar2 = local_48;
    if (local_48 == 0) {
LAB_001c2cff:
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = local_40;
      return param_1;
    }
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if (local_40 == 0) {
        *param_1 = 2;
        return param_1;
      }
      core::str::converts::from_utf8(&local_48,local_48,local_40);
      if (local_48 == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = local_40;
        if (local_40 == 0) {
          if ((local_38 & 1) == 0) {
            *(ulong *)(param_2 + 0x10) = uVar6;
            uVar3 = Incomplete::new(lVar2,uVar6);
            *(int *)(param_2 + 0x18) = (int)uVar3;
            *(char *)(param_2 + 0x1c) = (char)((ulong)uVar3 >> 0x20);
            goto LAB_001c2bd0;
          }
          uVar5 = (ulong)local_37;
        }
        uVar4 = (ulong)(local_40 == 0);
        uVar6 = uVar5;
      }
      *(ulong *)(param_2 + 0x10) = uVar6;
      _<std::io::stdio::StdinLock_as_std::io::BufRead>::fill_buf(&local_48,param_2);
      if (local_48 == 0) goto LAB_001c2cff;
      auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (uVar6,local_48,local_40);
      goto LAB_001c2ceb;
    }
    if (local_40 == 0) {
      auVar7 = Incomplete::take_buffer(lVar1);
      goto LAB_001c2d1e;
    }
    auVar7 = Incomplete::try_complete_offsets(lVar1,local_48,local_40);
    *(long *)(param_2 + 0x10) = auVar7._0_8_;
    if (auVar7[8] != '\x02') {
      uVar4 = auVar7._8_8_ & 0xffffffff;
      auVar7 = Incomplete::take_buffer(lVar1);
LAB_001c2ceb:
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
      }
      else {
LAB_001c2d1e:
        *param_1 = 1;
      }
      *(undefined (*) [16])(param_1 + 1) = auVar7;
      return param_1;
    }
  } while( true );
}