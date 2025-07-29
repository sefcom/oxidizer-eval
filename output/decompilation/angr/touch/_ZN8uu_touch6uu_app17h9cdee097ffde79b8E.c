long long uu_touch::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xb30]
    unsigned long long v1;  // [bp-0xb28]
    unsigned long long v2;  // [bp-0xb20]
    void* v3;  // [bp-0xb18], Other Possible Types: char
    int v4;  // [bp-0xb18]
    unsigned long long v5;  // [bp-0xb10]
    int v6;  // [bp-0xb08], Other Possible Types: void*
    int v7;  // [bp-0xb08]
    unsigned long long v8;  // [bp-0xb00]
    int v9;  // [bp-0xaf8]
    unsigned long long v10;  // [bp-0xaf8]
    int v11;  // [bp-0xaf0]
    int v12;  // [bp-0xae8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xae0]
    void* v14;  // [bp-0xad8], Other Possible Types: unsigned long long, char
    int v15;  // [bp-0xad0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xac8]
    int v17;  // [bp-0xac0], Other Possible Types: unsigned short
    char v18;  // [bp-0xabf]
    unsigned int v19;  // [bp-0xabe]
    int v20;  // [bp-0xab0]
    int v21;  // [bp-0xaa0]
    unsigned long long v22;  // [bp-0xa90]
    unsigned int v23;  // [bp-0x8a0]
    char v24;  // [bp-0x89c]
    unsigned long long v25;  // [bp-0x85c]
    unsigned int v26;  // [bp-0x854]
    int v27;  // [bp-0x850], Other Possible Types: char
    int v28;  // [bp-0x840]
    int v29;  // [bp-0x830]
    int v30;  // [bp-0x820]
    unsigned long long v31;  // [bp-0x810]
    int v32;  // [bp-0x808]
    char v33;  // [bp-0x7f8]
    char v34;  // [bp-0x7e8]
    char v35;  // [bp-0x7d8]
    char v36;  // [bp-0x7c8]
    char v37;  // [bp-0x7b8]
    void* v38;  // [bp-0x7a8]
    char v39;  // [bp-0x7a0]
    char v40;  // [bp-0x79f]
    unsigned int v41;  // [bp-0x79e]
    unsigned short v42;  // [bp-0x79a]
    unsigned int v43;  // [bp-0x580]
    unsigned int v44;  // [bp-0x57c]
    char v45;  // [bp-0x570]
    unsigned int v46;  // [bp-0x2f8]
    char v47;  // [bp-0x2f4]
    unsigned long v48;  // [bp-0x2b4]
    unsigned int v49;  // [bp-0x2ac]
    int v50;  // [bp-0x2a8], Other Possible Types: char, unsigned long long
    int v51;  // [bp-0x2a8]
    int v52;  // [bp-0x298]
    int v53;  // [bp-0x288]
    int v54;  // [bp-0x278]
    char v55;  // [bp-0x268]
    unsigned long long v58;  // rdx

    v3.new(uucore::util_name(), v58);
    v45.version(&v3, "(uutils coreutils) 0.1.0touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rust", 24);
    uucore::mods::locale::get_message(&v33, "touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-20", 11);
    v3.about(&v45, &v33);
    uucore::mods::locale::get_message(&v0, "touch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x8", 11);
    uucore::format_usage(&v33, v1, v2);
    v45.override_usage(&v3, &v33);
    memcpy(&v3, &v45, 700);
    v25 = 2252349570023552 | v48;
    v26 = v49;
    v45.new(_ZN8uu_touch7options4HELP17hc013cc791d4c6270E, g_771600);
    v33.long(&v45, _ZN8uu_touch7options4HELP17hc013cc791d4c6270E, g_771600);
    uucore::mods::locale::get_message(&v50, "touch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknow", 15);
    v45.help(&v33, &v50);
    v33.action(&v45, 5);
    v45.arg(&v3, &v33);
    v3.new(_ZN8uu_touch7options6ACCESS17hd2278682e00e1a5dE, g_771610);
    v33.short(&v3, 97);
    uucore::mods::locale::get_message(&v50, "touch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib", 17);
    v3.help(&v33, &v50);
    v33.action(&v3, 2);
    v3.arg(&v45, &v33);
    v45.new(*((long long *)&_ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE), g_7719a0);
    v33.short(&v45, 116);
    uucore::mods::locale::get_message(&v50, "touch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust", 20);
    v45.help(&v33, &v50);
    v33.value_name(&v45, "STAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys", 5);
    v45.arg(&v3, &v33);
    v3.new(*((long long *)&_ZN8uu_touch7options7sources4DATE17hc92707542e565230E), g_771980);
    v33.short(&v3, 100);
    v3.long(&v33, *((long long *)&_ZN8uu_touch7options7sources4DATE17hc92707542e565230E), g_771980);
    memcpy(&v33, &v3, 632);
    v43 = v23 | 32;
    v44 = *((int *)&v24);
    uucore::mods::locale::get_message(&v50, "touch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_s", 15);
    v3.help(&v33, &v50);
    v33.value_name(&v3, "STRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v50.conflicts_with(&v33, *((long long *)&_ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE), g_7719a0);
    v3.arg(&v45, &v50);
    v45.new(_ZN8uu_touch7options5FORCE17h973cd16f1862b4acE, g_771660);
    v33.short(&v45, 102);
    v45.help(&v33);
    memcpy(&v33, &v45, 632);
    v43 = v46 | 4;
    v44 = *((int *)&v47);
    v50.action(&v33, 2);
    v45.arg(&v3, &v50);
    v3.new(_ZN8uu_touch7options12MODIFICATION17ha306a006ba24d570E, g_771620);
    v33.short(&v3, 109);
    uucore::mods::locale::get_message(&v50, "touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 23);
    v3.help(&v33, &v50);
    v33.action(&v3, 2);
    v3.arg(&v45, &v33);
    v45.new(_ZN8uu_touch7options9NO_CREATE17h76ecaf6274142ac9E, g_771630);
    v33.short(&v45, 99);
    v45.long(&v33, _ZN8uu_touch7options9NO_CREATE17h76ecaf6274142ac9E, g_771630);
    uucore::mods::locale::get_message(&v50, "touch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 20);
    v33.help(&v45, &v50);
    v50.action(&v33, 2);
    v45.arg(&v3, &v50);
    v3.new(_ZN8uu_touch7options8NO_DEREF17h396be6aeffd9007cE, g_771640);
    v33.short(&v3, 104);
    v3.long(&v33, _ZN8uu_touch7options8NO_DEREF17h396be6aeffd9007cE, g_771640);
    uucore::mods::locale::get_message(&v50, "touch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19);
    v33.help(&v3, &v50);
    v50.action(&v33, 2);
    v3.arg(&v45, &v50);
    v45.new(*((long long *)&_ZN8uu_touch7options7sources9REFERENCE17hff6562b39181adc4E), g_771990);
    v33.short(&v45, 114);
    v45.long(&v33, *((long long *)&_ZN8uu_touch7options7sources9REFERENCE17hff6562b39181adc4E), g_771990);
    uucore::mods::locale::get_message(&v50, "touch-help-referencetouch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 20);
    v33.help(&v45, &v50);
    v45.value_name(&v33, "FILE", 4);
    v50 = 2;
    v33.value_parser(&v45, &v50);
    v45.value_hint(&v33, 2);
    v33.conflicts_with(&v45, *((long long *)&_ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE), g_7719a0);
    v45.arg(&v3, &v33);
    v3.new(_ZN8uu_touch7options4TIME17hd0f0a07d4b06cac0E, g_771650);
    v33.long(&v3, _ZN8uu_touch7options4TIME17hd0f0a07d4b06cac0E, g_771650);
    uucore::mods::locale::get_message(&v50, "touch-help-timeaccessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
    v3.help(&v33, &v50);
    v33.value_name(&v3, &g_460774, 4);
    v12 = "atimemtime(uutils coreutils) 0.1.0touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/";
    v13 = 5;
    v8 = 0x8000000000000000;
    v9 = v32;
    v3 = 0;
    v5 = 8;
    v6 = 0;
    v14 = 0;
    v50.alias(&v3, "accessusemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v27.alias(&v50, "usemodify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 3);
    v12 = "mtime(uutils coreutils) 0.1.0touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timeaccessusemodify/root/";
    v13 = 5;
    v8 = 0x8000000000000000;
    v9 = v32;
    *((unsigned long long *)&v4) = 0;
    v5 = 8;
    v6 = 0;
    v14 = 0;
    v50.alias(&(unsigned long long)v4, "modify/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v4 = v27;
    v7 = v28;
    v9 = v29;
    v12 = v30;
    v14 = v31;
    v15 = v51;
    v17 = v52;
    v20 = v53;
    v21 = v54;
    v22 = *((long long *)&v55);
    v27.from(&(unsigned long long)v4);
    v50.value_parser(&v33, &v27);
    (unsigned long long)v4.arg(&v45, &v50);
    v45.new("filessrc/uu/touch/src/touch.rs", 5);
    v33.action(&v45, 1);
    v45.num_args(&v33);
    v33.value_hint(&v45, 2);
    v45.arg(&(unsigned long long)v4, &v33);
    v15 = 1;
    v16 = 0;
    v3 = 0;
    v5 = 8;
    v17 = 0;
    *((uint128_t *)&v6) = 0;
    v10 = 8;
    *((uint128_t *)&v11) = 0;
    v13 = 8;
    v14 = 0;
    v33.id(&v3, _ZN8uu_touch7options7SOURCES17hc24ed14756f0f490E, g_7715f0);
    *((int128_t *)&v50) = *((int128_t *)&_ZN8uu_touch7options7sources9TIMESTAMP17h8c5eef011d67104bE);
    *((int128_t *)&v52) = *((int128_t *)&_ZN8uu_touch7options7sources4DATE17hc92707542e565230E);
    *((int128_t *)&v53) = *((int128_t *)&_ZN8uu_touch7options7sources9REFERENCE17hff6562b39181adc4E);
    v3.args(&v33, &v50);
    v18 = 1;
    memcpy(&v33, &v3, 16);
    memcpy(&v34, &v6, 16);
    memcpy(&v35, &v10, 16);
    memcpy(&v36, &v11, 16);
    memcpy(&v37, &v14, 16);
    v38 = 0;
    v39 = v17;
    v40 = 1;
    v41 = v19;
    v42 = (short)(&v17)[6];
    a0.group(&v45, &v33);
    ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
