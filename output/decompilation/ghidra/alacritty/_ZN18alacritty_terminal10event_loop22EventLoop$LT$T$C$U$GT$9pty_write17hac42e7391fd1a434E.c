long _ZN18alacritty_terminal10event_loop22EventLoop_LT_T_C_U_GT_9pty_write17hac42e7391fd1a434E
               (undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  long local_38;
  
  plVar1 = (long *)(param_2 + 0x200);
  if (*(long *)(param_2 + 0x200) == -0x7fffffffffffffff) {
    _ZN18alacritty_terminal10event_loop5State9goto_next17h7eba0190fe200f00E(param_2);
  }
  local_68 = *(undefined4 *)plVar1;
  uStack_64 = *(undefined4 *)(param_2 + 0x204);
  lVar3 = *plVar1;
  uStack_60 = *(undefined4 *)(param_2 + 0x208);
  uStack_5c = *(undefined4 *)(param_2 + 0x20c);
  local_58 = *(undefined4 *)(param_2 + 0x210);
  uStack_54 = *(undefined4 *)(param_2 + 0x214);
  uStack_50 = *(undefined4 *)(param_2 + 0x218);
  uStack_4c = *(undefined4 *)(param_2 + 0x21c);
  *plVar1 = -0x7fffffffffffffff;
  local_40 = param_2;
  if (lVar3 != -0x7fffffffffffffff) {
    do {
      uVar2 = CONCAT44(uStack_54,local_58);
      uVar7 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      uStack_84 = uStack_64;
      uStack_80 = uStack_60;
      uStack_7c = uStack_5c;
      local_78 = uVar2;
      do {
                    /* try { // try from 0046c470 to 0046c494 has its CatchHandler @ 0046c578 */
        uStack_70 = uVar7;
        auVar8 = _ZN18alacritty_terminal10event_loop7Writing15remaining_bytes17h8069a290e44c6b0dE
                           (&local_88);
        uVar5 = _ZN96__LT_alacritty_terminal__tty__unix__Pty_u20_as_u20_alacritty_terminal__tty__EventedReadWrite_GT_6reader17h3333ae7262e41769E
                          (param_1);
        auVar8 = (*(code *)
                   PTR__ZN59__LT_std__process__ChildStdin_u20_as_u20_std__io__Write_GT_5write17haf09ec8c0f64c2bbE_009de540
                 )(uVar5,auVar8._0_8_,auVar8._8_8_);
        lVar3 = local_40;
        lVar6 = auVar8._8_8_;
        if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          local_38 = lVar6;
          _ZN4core3ptr88drop_in_place_LT_core__option__Option_LT_alacritty_terminal__event_loop__Writing_GT__GT_17h05d462abb11a4eb0E
                    (plVar1);
          *(undefined4 *)(param_2 + 0x210) = (undefined4)local_78;
          *(undefined4 *)(param_2 + 0x214) = local_78._4_4_;
          *(undefined4 *)(param_2 + 0x218) = (undefined4)uStack_70;
          *(undefined4 *)(param_2 + 0x21c) = uStack_70._4_4_;
          *(undefined4 *)plVar1 = local_88;
          *(undefined4 *)(param_2 + 0x204) = uStack_84;
          *(undefined4 *)(param_2 + 0x208) = uStack_80;
          *(undefined4 *)(param_2 + 0x20c) = uStack_7c;
          cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar6);
          if ((cVar4 != '\r') && (cVar4 != '#')) {
            return lVar6;
          }
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(&local_38);
          return 0;
        }
        if (lVar6 == 0) {
          _ZN4core3ptr88drop_in_place_LT_core__option__Option_LT_alacritty_terminal__event_loop__Writing_GT__GT_17h05d462abb11a4eb0E
                    (plVar1);
          *(ulong *)(param_2 + 0x210) = local_78;
          *(ulong *)(param_2 + 0x218) = uStack_70;
          *plVar1 = CONCAT44(uStack_84,local_88);
          *(ulong *)(param_2 + 0x208) = CONCAT44(uStack_7c,uStack_80);
          return 0;
        }
        uVar7 = uVar7 + lVar6;
      } while (uVar7 < uVar2);
      uStack_70 = uVar7;
      _ZN18alacritty_terminal10event_loop5State9goto_next17h7eba0190fe200f00E(local_40);
      _ZN4core3ptr60drop_in_place_LT_alacritty_terminal__event_loop__Writing_GT_17h0adefae4ca5d573eE
                (&local_88);
      local_68 = *(undefined4 *)plVar1;
      uStack_64 = *(undefined4 *)(param_2 + 0x204);
      lVar6 = *plVar1;
      uStack_60 = *(undefined4 *)(param_2 + 0x208);
      uStack_5c = *(undefined4 *)(param_2 + 0x20c);
      local_58 = *(undefined4 *)(param_2 + 0x210);
      uStack_54 = *(undefined4 *)(param_2 + 0x214);
      uStack_50 = *(undefined4 *)(param_2 + 0x218);
      uStack_4c = *(undefined4 *)(param_2 + 0x21c);
      *(undefined8 *)(lVar3 + 0x200) = 0x8000000000000001;
    } while (lVar6 != -0x7fffffffffffffff);
  }
  _ZN4core3ptr88drop_in_place_LT_core__option__Option_LT_alacritty_terminal__event_loop__Writing_GT__GT_17h05d462abb11a4eb0E
            (&local_68);
  return 0;
}