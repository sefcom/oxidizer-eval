__int64 __fastcall fuel_core_client::client::schema::primitives::<impl core::convert::TryFrom<fuel_core_client::client::schema::primitives::U64> for fuel_asm::panic_instruction::PanicInstruction>::try_from(
        __int64 a1,
        __int64 a2)
{
  char v2; // dl

  *(_DWORD *)(a1 + 8) = <fuel_asm::panic_instruction::PanicInstruction as core::convert::From<u64>>::from(a2);
  *(_BYTE *)(a1 + 12) = v2;
  *(_QWORD *)a1 = 10LL;
  return a1;
}