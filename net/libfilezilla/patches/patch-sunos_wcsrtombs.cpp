--- lib/string.cpp.orig 2020-05-24 21:04:31.815105049 +0000
+++ lib/string.cpp      2020-05-24 21:04:51.835518355 +0000
@@ -354,7 +354,7 @@

                        std::mbstate_t ps{};
                        wchar_t const* in_p = in.data() + start;
-                       size_t len = wcsnrtombs(nullptr, &in_p, inlen, 0, &ps);
+                       size_t len = std::wcsnrtombs(nullptr, &in_p, inlen, 0, &ps);
                        if (len != static_cast<size_t>(-1)) {
                                size_t old = ret.size();
                                if (start) {
@@ -364,7 +364,7 @@
                                char* out_p = &ret[old];

                                in_p = in.data() + start; // Some implementations of wcsrtombs change src even on null dst
-                               wcsnrtombs(out_p, &in_p, inlen, len, &ps);
+                               std::wcsnrtombs(out_p, &in_p, inlen, len, &ps);
                        }
                        else {
                                ret.clear();
