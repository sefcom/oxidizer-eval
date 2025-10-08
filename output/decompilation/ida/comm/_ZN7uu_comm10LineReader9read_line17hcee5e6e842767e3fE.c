__int64 __fastcall uu_comm::LineReader::read_line(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // r12
  __int64 until; // r14
  char v5; // dl
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-30h]

  v3 = *(_BYTE *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    until = std::io::read_until(a1, v3, a2);
  }
  else
  {
    v9 = std::io::stdio::Stdin::lock(a1 + 8);
    LOBYTE(v10) = v5 & 1;
    until = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v9, v3, a2);
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v9, v10);
  }
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  LOBYTE(v9) = v3;
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v6, v7, &v9) )
    alloc::vec::Vec<T,A>::push(a2, v3);
  return until;
}