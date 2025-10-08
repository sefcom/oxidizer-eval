void _ZN18alacritty_terminal10event_loop5State9goto_next17h7eba0190fe200f00E(long param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h0d1d48e973731513E
            (&local_28,param_1);
  if (local_28 != -0x7fffffffffffffff) {
    local_38 = local_20;
    uStack_34 = uStack_1c;
    uStack_30 = uStack_18;
    uStack_2c = uStack_14;
  }
  _ZN4core3ptr88drop_in_place_LT_core__option__Option_LT_alacritty_terminal__event_loop__Writing_GT__GT_17h05d462abb11a4eb0E
            (param_1 + 0x200);
  *(long *)(param_1 + 0x200) = local_28;
  *(ulong *)(param_1 + 0x208) = CONCAT44(uStack_34,local_38);
  *(ulong *)(param_1 + 0x210) = CONCAT44(uStack_2c,uStack_30);
  *(undefined8 *)(param_1 + 0x218) = 0;
  return;
}