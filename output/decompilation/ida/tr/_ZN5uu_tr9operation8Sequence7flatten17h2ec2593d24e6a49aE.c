__int64 __fastcall uu_tr::operation::Sequence::flatten(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v7[23]; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v8[37]; // [rsp+23h] [rbp-25h] BYREF

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      result = alloc::boxed::Box<T>::new(*(unsigned __int8 *)(a1 + 1));
      break;
    case 1:
LABEL_7:
      result = alloc::boxed::Box<T>::new();
      break;
    case 2:
      result = alloc::boxed::Box<T>::new(*(unsigned __int8 *)(a1 + 1));
      break;
    case 3:
      result = alloc::boxed::Box<T>::new(*(_QWORD *)(a1 + 8), *(unsigned __int8 *)(a1 + 1));
      break;
    case 4:
      switch ( *(_BYTE *)(a1 + 1) )
      {
        case 0:
          core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          goto LABEL_9;
        case 1:
          v4 = core::iter::traits::iterator::Iterator::chain(5914880LL, 8020224LL);
          return alloc::boxed::Box<T>::new(v4);
        case 2:
          JUMPOUT(0xBD39ALL);
        case 3:
          v2 = core::iter::traits::iterator::Iterator::chain();
          return alloc::boxed::Box<T>::new(v2);
        case 4:
          JUMPOUT(0xBD37CLL);
        case 5:
          v5 = core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          core::iter::traits::iterator::Iterator::chain(v8, v5, 8020224LL);
          core::iter::traits::iterator::Iterator::chain(v7, v8, 3088640LL);
          core::iter::traits::iterator::Iterator::chain(v8, v7);
          core::iter::traits::iterator::Iterator::chain(v7, v8);
          core::iter::traits::iterator::Iterator::chain(v8, v7);
          core::iter::traits::iterator::Iterator::chain(v7, v8);
          return alloc::boxed::Box<T>::new(v7);
        case 6:
        case 0xA:
          goto LABEL_7;
        case 7:
          v3 = core::iter::traits::iterator::Iterator::chain(3747840LL, 5914880LL);
          core::iter::traits::iterator::Iterator::chain(v7, v3, 8020224LL);
          core::iter::traits::iterator::Iterator::chain(v8, v7, 3088640LL);
          core::iter::traits::iterator::Iterator::chain(v7, v8);
          core::iter::traits::iterator::Iterator::chain(v8, v7);
          core::iter::traits::iterator::Iterator::chain(v7, v8);
          return alloc::boxed::Box<T>::new(v7);
        case 8:
          v6 = core::iter::traits::iterator::Iterator::chain(3088640LL, 4209152LL);
          core::iter::traits::iterator::Iterator::chain(v8, v6, 6314752LL);
          core::iter::traits::iterator::Iterator::chain(v7, v8, 8289024LL);
          return alloc::boxed::Box<T>::new(v7);
        case 9:
          return alloc::boxed::Box<T>::new(
                   &anon_7f1aa69094a0bcb0f5c7ad9fb133502c_3_llvm_6519565530741107608,
                   anon_7f1aa69094a0bcb0f5c7ad9fb133502c_4_llvm_6519565530741107608);
        case 0xB:
          core::iter::traits::iterator::Iterator::chain(3747840LL, 4604160LL);
LABEL_9:
          JUMPOUT(0xBD366LL);
      }
  }
  return result;
}
