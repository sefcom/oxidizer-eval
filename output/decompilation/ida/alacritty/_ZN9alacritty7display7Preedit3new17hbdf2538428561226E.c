__int64 __fastcall alacritty::display::Preedit::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char **v14; // r8
  __int64 v15; // [rsp+0h] [rbp-38h]

  if ( *(_DWORD *)a3 != 1 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
  v6 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         v6,
         v8,
         v15);
  if ( !v9 )
  {
    v14 = &off_882830;
    goto LABEL_9;
  }
  v4 = core::iter::traits::iterator::Iterator::fold(v9, v9 + v10);
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v7,
          v8,
          v15);
  if ( !v11 )
  {
    v14 = &off_882848;
    v6 = v7;
LABEL_9:
    core::str::slice_error_fail(v8, v15, v6, v15, v14);
  }
  result = core::iter::traits::iterator::Iterator::fold(v11, v11 + v12);
  v13 = 1LL;
LABEL_6:
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}