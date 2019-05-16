// myobject.h
/*
class MyObject : public node::ObjectWrap {
 public:
  static void Init(v8::Local<v8::Object> exports);

 private:
  explicit MyObject(double value = 0);
  ~MyObject();

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void PlusOne(const v8::FunctionCallbackInfo<v8::Value>& args);
  static v8::Persistent<v8::Function> constructor;
  double value_;
};
*/

#include <nan.h>

class MyObject : public Nan::ObjectWrap {
  public:
    static NAN_MODULE_INIT(Init);

  private:
    explicit MyObject(double value = 0);
    ~MyObject();

    static NAN_METHOD(New);
    static NAN_METHOD(PlusOne);
    static Nan::Persistent<v8::Function> constructor;
    double value_;
};
