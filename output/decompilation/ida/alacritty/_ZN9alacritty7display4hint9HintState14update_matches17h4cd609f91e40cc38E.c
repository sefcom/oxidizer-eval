__int64 __fastcall alacritty::display::hint::HintState::update_matches(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r13
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  __int128 v17; // [rsp+8h] [rbp-120h] BYREF
  __int64 v18; // [rsp+18h] [rbp-110h]
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h]
  unsigned __int64 v21; // [rsp+30h] [rbp-F8h]
  _QWORD v22[7]; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v23[184]; // [rsp+70h] [rbp-B8h] BYREF

  result = a1[12];
  if ( result )
  {
    v4 = a1 + 12;
    v5 = a1 + 3;
    a1[5] = 0LL;
    if ( *(_BYTE *)(result + 216) )
    {
      alacritty::display::hint::visible_unique_hyperlinks_iter(v23);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(v5, v23);
      result = *v4;
    }
    v6 = *(_QWORD *)(result + 208);
    if ( v6 )
    {
      v22[0] = a2;
      v22[1] = v4;
      v22[2] = v5;
      alacritty::config::ui_config::LazyRegex::with_compiled(v6, (__int64)v22);
    }
    if ( a1[5] )
    {
      alloc::slice::<impl [T]>::sort_by_key(a1[4]);
      alloc::vec::Vec<T,A>::dedup_by_key(v5);
      alacritty::display::hint::HintLabels::new(v22, a1);
      v7 = a1[5];
      v8 = a1[11];
      *(_QWORD *)&v17 = 0LL;
      *((_QWORD *)&v17 + 1) = 4LL;
      v18 = 0LL;
      alloc::vec::Vec<T,A>::resize(a1 + 6, v7, &v17);
      if ( v7 )
      {
        v9 = v7 - 1;
        v10 = 24 * v7;
        do
        {
          alacritty::display::hint::HintLabels::next(&v19, v22);
          if ( v21 >= v8
            && (v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v20),
                (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, a1[10], a1[11])) )
          {
            alloc::vec::Vec<T,A>::split_off(&v17, &v19, v8);
            v14 = a1[8];
            if ( v9 >= v14 )
              core::panicking::panic_bounds_check(v9, v14, &off_882198);
            v11 = a1[7];
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(*(_QWORD *)(v11 + v10 - 24), *(_QWORD *)(v11 + v10 - 16));
            *(_QWORD *)(v11 + v10 - 8) = v18;
            *(_OWORD *)(v11 + v10 - 24) = v17;
          }
          else
          {
            v15 = a1[8];
            if ( v9 >= v15 )
              core::panicking::panic_bounds_check(v9, v15, &off_882168);
            v16 = a1[7];
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(*(_QWORD *)(v16 + v10 - 24), *(_QWORD *)(v16 + v10 - 16));
            *(_QWORD *)(v16 + v10 - 24) = 0LL;
            *(_QWORD *)(v16 + v10 - 16) = 4LL;
            *(_QWORD *)(v16 + v10 - 8) = 0LL;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v19, v20);
          --v9;
          v10 -= 24LL;
        }
        while ( v10 );
      }
      return core::ptr::drop_in_place<alacritty::display::hint::HintLabels>(v22);
    }
    else
    {
      return alacritty::display::hint::HintState::stop(a1);
    }
  }
  return result;
}