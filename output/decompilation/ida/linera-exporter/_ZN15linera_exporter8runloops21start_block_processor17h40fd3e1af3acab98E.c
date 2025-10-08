__int64 __fastcall linera_exporter::runloops::start_block_processor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int128 a7,
        __int64 a8)
{
  int v9; // [rsp+4h] [rbp-FC4h] BYREF
  _BYTE v10[80]; // [rsp+8h] [rbp-FC0h] BYREF
  _BYTE v11[80]; // [rsp+58h] [rbp-F70h] BYREF
  _BYTE v12[205]; // [rsp+A8h] [rbp-F20h] BYREF
  __int16 v13; // [rsp+175h] [rbp-E53h]
  _BYTE v14[1712]; // [rsp+180h] [rbp-E48h] BYREF
  __int128 v15; // [rsp+830h] [rbp-798h]
  __int64 v16; // [rsp+8E8h] [rbp-6E0h]
  __int64 v17; // [rsp+8F0h] [rbp-6D8h]
  __int64 v18; // [rsp+8F8h] [rbp-6D0h]
  int *v19; // [rsp+900h] [rbp-6C8h]
  __int64 v20; // [rsp+908h] [rbp-6C0h]
  __int64 v21; // [rsp+910h] [rbp-6B8h]
  __int64 v22; // [rsp+918h] [rbp-6B0h]
  char v23; // [rsp+925h] [rbp-6A3h]

  v9 = a6;
  v16 = a8;
  v17 = a8 + 24;
  v18 = a2;
  v19 = &v9;
  v20 = a4;
  v21 = a5;
  v22 = a3;
  v15 = a7;
  v23 = 0;
  tokio::runtime::builder::Builder::new_current_thread(v12);
  v13 = 257;
  tokio::runtime::builder::Builder::build(v11, v12);
  core::result::Result<T,E>::expect(v10, v11);
  tokio::runtime::runtime::Runtime::block_on(a1, v10, v14);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v10);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v12);
  core::ptr::drop_in_place<linera_service::config::DestinationConfig>(a8);
  return core::ptr::drop_in_place<linera_storage::db_storage::DbStorage<linera_views::backends::memory::MemoryDatabase>>(a2);
}