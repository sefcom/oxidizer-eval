__int64 __fastcall sniffnet::notifications::types::notifications::DataNotification::from(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // r14
  char v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned __int8 v13; // al
  char *v14; // r14
  char *v15; // rax
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  unsigned __int8 v19; // bp
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  char v30; // [rsp+5h] [rbp-93h]
  char v31; // [rsp+6h] [rbp-92h]
  char v32; // [rsp+7h] [rbp-91h]
  __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h] BYREF
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+38h] [rbp-60h] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  char v41[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v42; // [rsp+58h] [rbp-40h]
  __int64 v43; // [rsp+60h] [rbp-38h]

  if ( *(_DWORD *)a4 == 2 )
  {
    v6 = 1;
    v33 = 800000LL;
    v32 = 1;
    v7 = 1;
  }
  else
  {
    v7 = *(_BYTE *)(a4 + 24);
    v32 = *(_BYTE *)(a4 + 26);
    v6 = *(_BYTE *)(a4 + 25);
    v33 = *(_QWORD *)(a4 + 16);
  }
  v9 = core::str::<impl str>::trim_matches(a2, a3);
  core::iter::traits::iterator::Iterator::collect(&v38, v9, v9 + v8);
  v10 = v40;
  if ( v40 )
  {
    v30 = v7;
    v31 = v6;
    v11 = v39;
    v12 = v39 + 4 * v40;
    v34 = v39;
    v35 = v12;
    v13 = core::iter::traits::iterator::Iterator::try_fold(&v34);
    if ( (unsigned __int8)<iced_widget::stack::Stack<Message,Theme,Renderer> as iced_core::widget::Widget<Message,Theme,Renderer>>::mouse_interaction::{{closure}}(v13) )
    {
      v27 = v12 == 4;
      v14 = (char *)(v12 - 4);
      v15 = " ";
      if ( !v27 )
        v15 = v14;
      v16 = *(_DWORD *)v15;
      v17 = *(_DWORD *)v15 - 97;
      v18 = *(_DWORD *)v15 & 0x5F;
      if ( v17 >= 0x1A )
        v18 = v16;
      v19 = 0;
      switch ( v18 )
      {
        case 'G':
          v19 = 3;
          break;
        case 'K':
          v19 = 1;
          break;
        case 'M':
          v19 = 2;
          break;
        case 'P':
          v19 = 5;
          break;
        case 'T':
          v19 = 4;
          break;
        default:
          break;
      }
      v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              v10 - 1,
              v11,
              v10,
              &off_2DFFAF8);
      core::iter::traits::iterator::Iterator::collect(v41, v21, v21 + 4 * v22);
      v23 = v42;
      v24 = v43;
      core::num::<impl u64>::from_ascii_radix(&v34, v42, v43);
      if ( (_BYTE)v34
        || (core::num::<impl u128>::from_ascii_radix(&v34, v23, v24),
            v25 = core::result::Result<T,E>::unwrap_or_default((unsigned int)v34, v36, v37),
            qword_18E9EA8[v19] * v26
          + (((unsigned __int64)qword_18E9EA8[v19] * (unsigned __int128)(unsigned __int64)v25) >> 64)) )
      {
        v27 = v24 == 0;
        v28 = v33;
        if ( !v24 )
          v28 = 0LL;
        v20 = v28;
        v19 = v32;
        if ( v27 )
          v19 = 0;
      }
      else
      {
        core::num::<impl u64>::from_ascii_radix(&v34, v23, v24);
        v20 = qword_18E9EA8[v19] * core::result::Result<T,E>::unwrap_or_default((unsigned int)v34, v35);
      }
      v6 = v31;
      v7 = v30;
      core::ptr::drop_in_place<alloc::string::String>(v41);
    }
    else
    {
      core::num::<impl u64>::from_ascii_radix(&v34, a2, a3);
      v20 = v33;
      if ( !(_BYTE)v34 )
        v20 = v35;
      v19 = 0;
      v6 = v31;
      v7 = v30;
    }
  }
  else
  {
    v20 = 0LL;
    v19 = 0;
  }
  *(_BYTE *)(a1 + 24) = v7;
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = v20;
  *(_BYTE *)(a1 + 26) = v19;
  *(_BYTE *)(a1 + 25) = v6;
  *(_QWORD *)(a1 + 16) = v20;
  return core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v38, v39);
}