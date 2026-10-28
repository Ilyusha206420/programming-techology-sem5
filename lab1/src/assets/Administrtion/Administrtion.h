#pragma once

#include "../Base/Base.h"
#include <string>

namespace my {
class Administration : public Base {
public:
  Administration();
  Administration(const std::string &name, const std::string &post,
                 const std::string &aor);
  Administration(const std::string arg_arr[3]);
  ~Administration();

  std::string getPost() const;
  std::string getAOR() const;

  void setPost(const std::string &newPost);
  void setAOR(const std::string &newAOR);

  std::string represent() const override;

private:
  std::string _post;
  std::string _area_of_responsibility;
};
} // namespace my
