__int64 __fastcall alacritty::display::hint::HintMatch::text(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned int v6; // ebp
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rsi
  __int128 v12; // xmm0
  int v13; // [rsp+8h] [rbp-80h]
  int v14; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  unsigned __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]
  unsigned __int8 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]

  v4 = *a2;
  if ( !*a2 )
  {
    v10 = *(_QWORD *)(a2[1] + 208);
    if ( v10 )
    {
      alacritty::config::ui_config::LazyRegex::with_compiled(&v15, v10, a3, a2);
      if ( (_BYTE)v19 != 3
        && (_BYTE)v19 != 2
        && (_DWORD)v16 == *((_DWORD *)a2 + 6)
        && v15 == a2[2]
        && (_DWORD)v18 == *((_DWORD *)a2 + 10)
        && v17 == a2[4]
        && ((*((_BYTE *)a2 + 48) ^ (unsigned __int8)v19) & 1) == 0 )
      {
        return alacritty_terminal::term::Term<T>::bounds_to_string(a1, a3, v15, v16, v17, v18);
      }
    }
LABEL_16:
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return result;
  }
  v5 = a2[2];
  v6 = *((_DWORD *)a2 + 6);
  alacritty::display::hint::hyperlink_at(&v15, a3, v5, v6);
  v7 = v20;
  if ( v20 == 2 )
    goto LABEL_16;
  v8 = v15;
  v22 = v16;
  v14 = v17;
  v21 = v18;
  v13 = v19;
  if ( (v15 == v4
     || (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                           *(_QWORD *)(v15 + 24),
                           *(_QWORD *)(v15 + 32),
                           *(_QWORD *)(v4 + 24),
                           *(_QWORD *)(v4 + 32))
     && (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                           *(_QWORD *)(v8 + 48),
                           *(_QWORD *)(v8 + 56),
                           *(_QWORD *)(v4 + 48),
                           *(_QWORD *)(v4 + 56)))
    && v14 == v6
    && v22 == v5
    && v13 == *((_DWORD *)a2 + 10)
    && v21 == a2[4]
    && ((*((_BYTE *)a2 + 48) ^ v7) & 1) == 0 )
  {
    v12 = *(_OWORD *)(v4 + 48);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_OWORD *)(a1 + 8) = v12;
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return core::ptr::drop_in_place<alacritty_terminal::term::cell::Hyperlink>(&v15);
}