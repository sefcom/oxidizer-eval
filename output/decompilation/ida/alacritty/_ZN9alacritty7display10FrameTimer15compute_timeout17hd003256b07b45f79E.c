__int64 __fastcall alacritty::display::FrameTimer::compute_timeout(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // edx

  v4 = a2;
  v5 = std::time::Instant::now(a1);
  v7 = v5;
  v8 = v6;
  if ( *(_QWORD *)(a1 + 32) != a2 || *(_DWORD *)(a1 + 40) != a3 )
  {
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = a2;
    *(_DWORD *)(a1 + 40) = a3;
    return v4;
  }
  v9 = <std::time::Instant as core::ops::arith::Add<core::time::Duration>>::add(
         *(_QWORD *)(a1 + 16),
         *(unsigned int *)(a1 + 24),
         a2,
         a3);
  if ( v9 == v7 )
  {
    if ( v10 >= v8 )
    {
LABEL_5:
      *(_QWORD *)(a1 + 16) = v9;
      *(_DWORD *)(a1 + 24) = v10;
      return <std::time::Instant as core::ops::arith::Sub>::sub(v9, v10, v7, v8);
    }
  }
  else if ( v9 >= v7 )
  {
    goto LABEL_5;
  }
  v11 = <std::time::Instant as core::ops::arith::Sub>::sub(v7, v8, *(_QWORD *)a1, *(unsigned int *)(a1 + 8));
  v13 = 1000000 * a2 + a3 / 0x3E8uLL;
  if ( !v13 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_882860);
  v14 = v12 / 0x3E8uLL + 1000000 * v11;
  if ( (v13 | v14) >> 32 )
    v15 = v14 % v13;
  else
    v15 = (unsigned int)v14 % (unsigned int)v13;
  *(_QWORD *)(a1 + 16) = <std::time::Instant as core::ops::arith::Sub<core::time::Duration>>::sub(
                           v7,
                           v8,
                           v15 / 0xF4240,
                           1000 * (unsigned int)(v15 % 0xF4240));
  *(_DWORD *)(a1 + 24) = v16;
  return 0LL;
}