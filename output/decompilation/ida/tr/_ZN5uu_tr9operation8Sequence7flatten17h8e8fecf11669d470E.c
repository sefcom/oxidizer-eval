__int64 __fastcall uu_tr::operation::Sequence::flatten(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  __int64 v5; // rdi
  const char *v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[23]; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v14[37]; // [rsp+23h] [rbp-25h] BYREF

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      result = alloc::boxed::Box<T>::new(*(unsigned __int8 *)(a1 + 1));
      break;
    case 1:
LABEL_9:
      result = alloc::boxed::Box<T>::new();
      break;
    case 2:
      result = alloc::boxed::Box<T>::new(*(unsigned __int8 *)(a1 + 1));
      break;
    case 3:
      v4 = *(_BYTE *)(a1 + 1);
      v5 = *(_QWORD *)(a1 + 8);
      if ( !v5 )
        v5 = 0LL;
      result = alloc::boxed::Box<T>::new(v5, v4);
      break;
    case 4:
      switch ( *(_BYTE *)(a1 + 1) )
      {
        case 0:
          v2 = core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          v3 = 8020224LL;
          goto LABEL_11;
        case 1:
          v10 = core::iter::traits::iterator::Iterator::chain(5914880LL, 8020224LL);
          return alloc::boxed::Box<T>::new(v10);
        case 2:
          v6 = asc_1BD0E;
          v7 = aUutilsCoreutil;
          goto LABEL_14;
        case 3:
          v8 = core::iter::traits::iterator::Iterator::chain();
          return alloc::boxed::Box<T>::new(v8);
        case 4:
          JUMPOUT(0x707BBLL);
        case 5:
          v11 = core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          core::iter::traits::iterator::Iterator::chain(v14, v11, 8020224LL);
          core::iter::traits::iterator::Iterator::chain(v13, v14, 3088640LL);
          core::iter::traits::iterator::Iterator::chain(v14, v13);
          core::iter::traits::iterator::Iterator::chain(v13, v14);
          core::iter::traits::iterator::Iterator::chain(v14, v13);
          core::iter::traits::iterator::Iterator::chain(v13, v14);
          return alloc::boxed::Box<T>::new(v13);
        case 6:
        case 0xA:
          goto LABEL_9;
        case 7:
          v9 = core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          core::iter::traits::iterator::Iterator::chain(v13, v9, 8020224LL);
          core::iter::traits::iterator::Iterator::chain(v14, v13, 3088640LL);
          core::iter::traits::iterator::Iterator::chain(v13, v14);
          core::iter::traits::iterator::Iterator::chain(v14, v13);
          core::iter::traits::iterator::Iterator::chain(v13, v14);
          return alloc::boxed::Box<T>::new(v13);
        case 8:
          v12 = core::iter::traits::iterator::Iterator::chain(3088640LL, 4209152LL);
          core::iter::traits::iterator::Iterator::chain(v14, v12, 6314752LL);
          core::iter::traits::iterator::Iterator::chain(v13, v14, 8289024LL);
          return alloc::boxed::Box<T>::new(v13);
        case 9:
          v6 = (const char *)&unk_1BD08;
          v7 = asc_1BD0E;
LABEL_14:
          result = alloc::boxed::Box<T>::new(v6, v7);
          break;
        case 0xB:
          v2 = core::iter::traits::iterator::Iterator::chain(3747840LL, 4604160LL);
          v3 = 6709504LL;
LABEL_11:
          core::iter::traits::iterator::Iterator::chain(v13, v2, v3);
          result = alloc::boxed::Box<T>::new(v13);
          break;
      }
      break;
  }
  return result;
}