__int64 __fastcall metal_crusher::fun::notify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+0h] [rbp-358h] BYREF
  __int64 v13; // [rsp+10h] [rbp-348h]
  __int64 v14; // [rsp+88h] [rbp-2D0h]
  _BYTE v15[64]; // [rsp+98h] [rbp-2C0h] BYREF
  __int128 v16; // [rsp+D8h] [rbp-280h] BYREF
  __int64 v17; // [rsp+E8h] [rbp-270h]
  const char *v18; // [rsp+F0h] [rbp-268h]
  __int64 v19; // [rsp+F8h] [rbp-260h]
  __int128 *v20; // [rsp+100h] [rbp-258h]
  const char *v21; // [rsp+108h] [rbp-250h]
  __int64 v22; // [rsp+110h] [rbp-248h]
  const char *v23; // [rsp+118h] [rbp-240h]
  __int64 v24; // [rsp+120h] [rbp-238h]
  char v25; // [rsp+128h] [rbp-230h]

  *(_QWORD *)&v16 = rand::rngs::thread::rng();
  v6 = rand::rng::Rng::random_range(&v16, 0LL, 0xFFFFFFFFLL, &off_596540);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v16);
  std::sync::poison::once::Once::call_once();
  <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v16, 1LL, 0LL, 0LL, &off_596570);
  v7 = std::thread::local::LocalKey<T>::with(&off_596588);
  v14 = v6 | 0xBB800000000LL;
  v12 = v16;
  v13 = v17;
  *(_QWORD *)&v16 = &metal_crusher::fun::FUN_INSTANCE;
  v21 = aOrgFreedesktop_0;
  v22 = 29LL;
  *((_QWORD *)&v16 + 1) = aOrgFreedesktop;
  v17 = 30LL;
  v23 = aOrgFreedesktop_0;
  v24 = 29LL;
  v18 = aNotify;
  v19 = 6LL;
  v20 = &v12;
  v25 = 0;
  async_io::driver::block_on(
    v15,
    &v16,
    v8,
    aOrgFreedesktop,
    v9,
    v10,
    v12,
    *((_QWORD *)&v12 + 1),
    v13,
    aMetalCrusher,
    13LL,
    aDialogInformat,
    18LL,
    a1,
    a2,
    a3,
    a4,
    &xmmword_2F520,
    0LL,
    0LL,
    0LL,
    v7,
    v8,
    v14);
  core::ptr::drop_in_place<(&str,u32,&str,&str,&str,alloc::vec::Vec<&str>,std::collections::hash::map::HashMap<&str,&zvariant::value::Value>,i32)>(&v12);
  return core::ptr::drop_in_place<core::result::Result<zbus::message::Message,zbus::error::Error>>(v15);
}