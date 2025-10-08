
  int64_t* fuel_core_client::client::schema::primitives::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..primitives..U64$GT$$u20$for$u20$fuel_asm..panic_instruction..PanicInstruction$GT$::try_from::hf514da350207d085(int64_t* arg1, int64_t arg2)

{
    int32_t rax;
    char rdx;
    rax = _$LT$fuel_asm..panic_instruction..PanicInstruction$u20$as$u20$core..convert..From$LT$u64$GT$$GT$::from::h90bb7efc5033f10d(arg2);
    arg1[1] = rax;
    *(arg1 + 0xc) = rdx;
    *arg1 = 0xa;
    return arg1;
}
